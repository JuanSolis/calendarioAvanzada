#pragma once
#include <iostream>;
#include <string>;
#include "actividades.h";
#include "recordatorios.h";
#include "alarmas.h";
#include "dia.h";
#include <msclr\marshal_cppstd.h>;
#include "claseUsuario.h";
#include <utility>
#include <map>
#include <iomanip>
#include "eventosRegistrados.h";

namespace Proyecto2AvanzadaCalendario {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	static dia diaActual;
	extern claseUsuario datosUsuario;
	using namespace std;
	/// <summary>
	/// Resumen de MyForm1
	/// </summary>


	public ref class MyForm1 : public System::Windows::Forms::Form
	{

	public:
		String^ fechaRecibida;

		MyForm1(String^ valorFecha)
		{
			
			InitializeComponent();
			fechaRecibida = valorFecha;
			dia diaEstadoActual;
			diaActual = diaEstadoActual;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioActividades;



	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioAlarmas;

	private: System::Windows::Forms::RadioButton^  radioRecordatorios;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txtIdEvento;
	private: System::Windows::Forms::TextBox^  txtDescripcion;
	private: System::Windows::Forms::TextBox^  txtPrioridad;
	private: System::Windows::Forms::DateTimePicker^  horaLimite;
	private: System::Windows::Forms::DateTimePicker^  horaInicio;
	private: System::Windows::Forms::DateTimePicker^  horaFinalizacion;
	private: System::Windows::Forms::TextBox^  txtLugarReunion;
	private: System::Windows::Forms::ComboBox^  txtPersonaInvolucrada;
	private: System::Windows::Forms::TextBox^  txtMateriales;
	private: System::Windows::Forms::Button^  button1;








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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioActividades = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioAlarmas = (gcnew System::Windows::Forms::RadioButton());
			this->radioRecordatorios = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtIdEvento = (gcnew System::Windows::Forms::TextBox());
			this->txtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->txtPrioridad = (gcnew System::Windows::Forms::TextBox());
			this->horaLimite = (gcnew System::Windows::Forms::DateTimePicker());
			this->horaInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->horaFinalizacion = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtLugarReunion = (gcnew System::Windows::Forms::TextBox());
			this->txtPersonaInvolucrada = (gcnew System::Windows::Forms::ComboBox());
			this->txtMateriales = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Eventos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(108, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// radioActividades
			// 
			this->radioActividades->AutoSize = true;
			this->radioActividades->CheckAlign = System::Drawing::ContentAlignment::TopRight;
			this->radioActividades->Location = System::Drawing::Point(27, 29);
			this->radioActividades->Name = L"radioActividades";
			this->radioActividades->Size = System::Drawing::Size(80, 17);
			this->radioActividades->TabIndex = 3;
			this->radioActividades->Text = L"Actividades";
			this->radioActividades->UseVisualStyleBackColor = true;
			this->radioActividades->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioActividades_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioAlarmas);
			this->groupBox1->Controls->Add(this->radioRecordatorios);
			this->groupBox1->Controls->Add(this->radioActividades);
			this->groupBox1->Location = System::Drawing::Point(17, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(163, 128);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Eventos a Seleccionar";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm1::groupBox1_Enter);
			// 
			// radioAlarmas
			// 
			this->radioAlarmas->AutoSize = true;
			this->radioAlarmas->CheckAlign = System::Drawing::ContentAlignment::TopRight;
			this->radioAlarmas->Location = System::Drawing::Point(27, 99);
			this->radioAlarmas->Name = L"radioAlarmas";
			this->radioAlarmas->Size = System::Drawing::Size(62, 17);
			this->radioAlarmas->TabIndex = 5;
			this->radioAlarmas->Text = L"Alarmas";
			this->radioAlarmas->UseVisualStyleBackColor = true;
			this->radioAlarmas->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioAlarmas_CheckedChanged);
			// 
			// radioRecordatorios
			// 
			this->radioRecordatorios->AutoSize = true;
			this->radioRecordatorios->CheckAlign = System::Drawing::ContentAlignment::TopRight;
			this->radioRecordatorios->Location = System::Drawing::Point(27, 65);
			this->radioRecordatorios->Name = L"radioRecordatorios";
			this->radioRecordatorios->Size = System::Drawing::Size(91, 17);
			this->radioRecordatorios->TabIndex = 4;
			this->radioRecordatorios->Text = L"Recordatorios";
			this->radioRecordatorios->UseVisualStyleBackColor = true;
			this->radioRecordatorios->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioRecordatorios_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(269, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Hora de Inicio";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(269, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Hora de Finalizacion";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(269, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Lugar de la Reunion";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(269, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Persona Involucrada";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(269, 169);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Materiales Necesarios";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 298);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Nivel de Prioridad";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 262);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Descripcion";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(21, 231);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(70, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Id del Evento";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(21, 331);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Hora Limite";
			// 
			// txtIdEvento
			// 
			this->txtIdEvento->Location = System::Drawing::Point(129, 228);
			this->txtIdEvento->Name = L"txtIdEvento";
			this->txtIdEvento->Size = System::Drawing::Size(100, 20);
			this->txtIdEvento->TabIndex = 16;
			// 
			// txtDescripcion
			// 
			this->txtDescripcion->Location = System::Drawing::Point(129, 262);
			this->txtDescripcion->Name = L"txtDescripcion";
			this->txtDescripcion->Size = System::Drawing::Size(100, 20);
			this->txtDescripcion->TabIndex = 17;
			// 
			// txtPrioridad
			// 
			this->txtPrioridad->Location = System::Drawing::Point(129, 298);
			this->txtPrioridad->Name = L"txtPrioridad";
			this->txtPrioridad->Size = System::Drawing::Size(100, 20);
			this->txtPrioridad->TabIndex = 18;
			// 
			// horaLimite
			// 
			this->horaLimite->CustomFormat = L"h:mm tt";
			this->horaLimite->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->horaLimite->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->horaLimite->Location = System::Drawing::Point(129, 331);
			this->horaLimite->Name = L"horaLimite";
			this->horaLimite->ShowUpDown = true;
			this->horaLimite->Size = System::Drawing::Size(100, 20);
			this->horaLimite->TabIndex = 19;
			// 
			// horaInicio
			// 
			this->horaInicio->CustomFormat = L"h:mm tt";
			this->horaInicio->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->horaInicio->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->horaInicio->Location = System::Drawing::Point(384, 54);
			this->horaInicio->Name = L"horaInicio";
			this->horaInicio->ShowUpDown = true;
			this->horaInicio->Size = System::Drawing::Size(100, 20);
			this->horaInicio->TabIndex = 20;
			// 
			// horaFinalizacion
			// 
			this->horaFinalizacion->CustomFormat = L"h:mm tt";
			this->horaFinalizacion->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->horaFinalizacion->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->horaFinalizacion->Location = System::Drawing::Point(384, 85);
			this->horaFinalizacion->Name = L"horaFinalizacion";
			this->horaFinalizacion->ShowUpDown = true;
			this->horaFinalizacion->Size = System::Drawing::Size(100, 20);
			this->horaFinalizacion->TabIndex = 21;
			// 
			// txtLugarReunion
			// 
			this->txtLugarReunion->Location = System::Drawing::Point(384, 121);
			this->txtLugarReunion->Name = L"txtLugarReunion";
			this->txtLugarReunion->Size = System::Drawing::Size(100, 20);
			this->txtLugarReunion->TabIndex = 22;
			// 
			// txtPersonaInvolucrada
			// 
			this->txtPersonaInvolucrada->FormattingEnabled = true;
			this->txtPersonaInvolucrada->Location = System::Drawing::Point(384, 212);
			this->txtPersonaInvolucrada->Name = L"txtPersonaInvolucrada";
			this->txtPersonaInvolucrada->Size = System::Drawing::Size(121, 21);
			this->txtPersonaInvolucrada->TabIndex = 23;
			// 
			// txtMateriales
			// 
			this->txtMateriales->Location = System::Drawing::Point(384, 166);
			this->txtMateriales->Name = L"txtMateriales";
			this->txtMateriales->Size = System::Drawing::Size(100, 20);
			this->txtMateriales->TabIndex = 24;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(272, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 37);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Agregar Evento";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 371);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtMateriales);
			this->Controls->Add(this->txtPersonaInvolucrada);
			this->Controls->Add(this->txtLugarReunion);
			this->Controls->Add(this->horaFinalizacion);
			this->Controls->Add(this->horaInicio);
			this->Controls->Add(this->horaLimite);
			this->Controls->Add(this->txtPrioridad);
			this->Controls->Add(this->txtDescripcion);
			this->Controls->Add(this->txtIdEvento);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {

		label2->Text = fechaRecibida;
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// Convierte String^ a string
	msclr::interop::marshal_context context;
	std::string standarDate = context.marshal_as<std::string>(fechaRecibida);
	diaActual.fecha = standarDate;
	std::string standarIdEvento = context.marshal_as<std::string>(txtIdEvento->Text->ToString());
	std::string standarDescription = context.marshal_as<std::string>(txtDescripcion->Text->ToString());
	std::string standarPrioridad = context.marshal_as<std::string>(txtPrioridad->Text->ToString());
	// si desea agregar actividad
	if (radioActividades->Checked == true)
	{
		actividades actividadesActuales;
		actividadesActuales.idEvento = atoi(standarIdEvento.c_str());
		actividadesActuales.Descripcion = standarDescription;
		actividadesActuales.prioridad = standarPrioridad;
		// Convierte String^ a string
		std::string standarHoraInicio = context.marshal_as<std::string>(Convert::ToDateTime(horaInicio->Value.ToShortTimeString()).ToString("h:mm tt"));
		actividadesActuales.horaInicio = standarHoraInicio;
		std::string standarHoraFinalizacion = context.marshal_as<std::string>(Convert::ToDateTime(horaFinalizacion->Value.ToShortTimeString()).ToString("h:mm tt"));
		actividadesActuales.horaFin = standarHoraFinalizacion;
		std::string standarLugarReunion = context.marshal_as<std::string>(txtLugarReunion->Text->ToString());
		actividadesActuales.lugarReunion = standarLugarReunion;
		std::string standarMateriales = context.marshal_as<std::string>(txtMateriales->Text->ToString());
		actividadesActuales.materiales = standarMateriales;
		actividadesActuales.personaInvolucrada = "Ninguna";
		// sobrecarga a eventoRegistrado con Actividad
		eventosRegistrados eventosListados(actividadesActuales);
		diaActual.eventos.insert(pair<string, eventosRegistrados>("actividad", eventosListados));
	}
	// si desea agregar recordatorio
	if (radioRecordatorios->Checked == true)
	{
		recordatorios recordatoriosActuales;
		std::string standarIdEvento = context.marshal_as<std::string>(txtIdEvento->Text->ToString());
		recordatoriosActuales.idEvento = atoi(standarIdEvento.c_str());
		std::string standarDescription = context.marshal_as<std::string>(txtDescripcion->Text->ToString());
		recordatoriosActuales.Descripcion = standarDescription;
		std::string standarPrioridad = context.marshal_as<std::string>(txtPrioridad->Text->ToString());
		recordatoriosActuales.prioridad = standarPrioridad;
		std::string standarHoraLimite = context.marshal_as<std::string>(Convert::ToDateTime(horaLimite->Value.ToShortTimeString()).ToString("h:mm tt"));
		recordatoriosActuales.horaLimite = standarHoraLimite;
		std::string standarHoraFinalizacion = context.marshal_as<std::string>(Convert::ToDateTime(horaFinalizacion->Value.ToShortTimeString()).ToString("h:mm tt"));
		// sobrecarga a eventoRegistrado con Recordatorio
		eventosRegistrados eventosListados(recordatoriosActuales);
		diaActual.eventos.insert(pair<string, eventosRegistrados>("recordatorio", eventosListados));
	}
	

	if (System::Windows::Forms::MessageBox::Show("Desea agregar otro evento?", "Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		txtIdEvento->Text = "";
		txtDescripcion->Text = "";
		txtPrioridad->Text = "";
		if (radioActividades->Checked == true)
		{
			radioActividades->Checked = false;
		}
	}
	else
	{
		datosUsuario.dias.push_back(diaActual);
		this->Close();
	}

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void radioActividades_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioActividades->Checked == true)
	{
		horaLimite->Enabled = false;
		horaInicio->Enabled = true;
		horaFinalizacion->Enabled = true;
		txtLugarReunion->Enabled = true;
		txtPersonaInvolucrada->Enabled = true;
		txtMateriales->Enabled = true;
	}

}
private: System::Void radioRecordatorios_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {


	if (radioRecordatorios->Checked == true)
	{
		horaLimite->Enabled = true;
		horaInicio->Enabled = false;
		horaFinalizacion->Enabled = false;
		txtLugarReunion->Enabled = false;
		txtPersonaInvolucrada->Enabled = false;
		txtMateriales->Enabled = false;
	}
}
private: System::Void radioAlarmas_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (radioAlarmas->Checked == true)
	{
		horaLimite->Enabled = true;
		horaInicio->Enabled = false;
		horaFinalizacion->Enabled = false;
		txtLugarReunion->Enabled = false;
		txtPersonaInvolucrada->Enabled = false;
		txtMateriales->Enabled = false;
	}
}
};
}
