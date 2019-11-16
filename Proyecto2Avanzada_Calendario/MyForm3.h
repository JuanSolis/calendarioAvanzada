#pragma once
#include <string>;
#include <iostream>;
#include <fstream>;
#include "usuarios.h";
#include <vector>;
#include <msclr\marshal_cppstd.h>;
#include "MyForm.h";
#include "claseUsuario.h";
namespace Proyecto2AvanzadaCalendario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	claseUsuario datosUsuario;
	vector<usuarios> usuariosRegistrados;

	/// <summary>
	/// Resumen de MyForm3
	/// </summary>

	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  txtUsuario;
	private: System::Windows::Forms::TextBox^  txtPass;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(55, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Inserte sus datos";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(123, 96);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(100, 20);
			this->txtUsuario->TabIndex = 1;
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(124, 147);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(100, 20);
			this->txtPass->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(123, 194);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Usuario";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Contraseña";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 255);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm3";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		ofstream file;
		file.open("usuarios.txt");
		std::string standarUsuario = context.marshal_as<std::string>(txtUsuario->Text->ToString());
		std::string standarPass = context.marshal_as<std::string>(txtPass->Text->ToString());
		bool usuarioNoListado = true;

		for each (usuarios usuarioListado in usuariosRegistrados)
		{
			if (usuarioListado.usuario != standarUsuario )
			{
				usuarioNoListado = true;
			}
			else {
				usuarioNoListado = false;
				break;
			}
		}

		if (usuarioNoListado == true)
		{
			System::Windows::Forms::MessageBox::Show("Usuario no encontrado, se registrara este usuario");
			usuarios usuarioNuevo;
			usuarioNuevo.usuario = standarUsuario;
			usuarioNuevo.password = standarPass;
			usuariosRegistrados.push_back(usuarioNuevo);
			for each (usuarios usuarioListado in usuariosRegistrados)
			{
				file << usuarioListado.usuario + "," + usuarioListado.password + "\n";
			}
			file.close();
			MyForm^ formularioHome = gcnew MyForm(standarUsuario);
			formularioHome->Show();
			this->Close();
		}
		else {
			
		}

	}
private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
	ifstream archivoUsuario("usuarios.txt");
	string cadena;
	size_t found;
	vector<string> lineasArchivoUsuario;
	msclr::interop::marshal_context context;

	while (!archivoUsuario.eof()) {
		archivoUsuario >> cadena;
		lineasArchivoUsuario.push_back(cadena);
	}
	archivoUsuario.close();

	for each (string linea in lineasArchivoUsuario)
	{
		vector<string> datosArchivoUsuarios;
		usuarios nuevoUsuario;
		found = linea.find(","); // Split para encontrar la primer coma
		datosArchivoUsuarios.push_back(linea.substr(0, found));// agrega al vector de datos la palabra antes de la primera coma
		datosArchivoUsuarios.push_back(linea.substr(found + 1, linea.size())); // agrega al vector de datos la palabra al final
		nuevoUsuario.usuario = datosArchivoUsuarios[0];
		nuevoUsuario.password = datosArchivoUsuarios[1];
		usuariosRegistrados.push_back(nuevoUsuario);
	}

}
};
}