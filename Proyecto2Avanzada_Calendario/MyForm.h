#pragma once
#include <iostream>;
#include <string>;
#include <utility>;
#include <map>;
#include <iomanip>;
#include <msclr\marshal_cppstd.h>;
#include "MyForm1.h";
#include "claseUsuario.h";
#include <iostream>;
#include <fstream>;

namespace Proyecto2AvanzadaCalendario {	 
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	
	extern claseUsuario datosUsuario;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(std::string usuarioRegistrado)
		{
			InitializeComponent();
			datosUsuario.usuario = usuarioRegistrado;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  lblAño;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  lblMes;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;








	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;


	protected:

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
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblAño = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblMes = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(39, 181);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->MinDate = System::DateTime(2019, 1, 1, 0, 0, 0, 0);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 2;
			this->monthCalendar1->Visible = false;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::monthCalendar1_DateChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(50, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Imprimir Mes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblAño
			// 
			this->lblAño->Location = System::Drawing::Point(72, 64);
			this->lblAño->Name = L"lblAño";
			this->lblAño->Size = System::Drawing::Size(100, 20);
			this->lblAño->TabIndex = 4;
			this->lblAño->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Año: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Mes:";
			// 
			// lblMes
			// 
			this->lblMes->Location = System::Drawing::Point(72, 103);
			this->lblMes->Name = L"lblMes";
			this->lblMes->Size = System::Drawing::Size(100, 20);
			this->lblMes->TabIndex = 6;
			this->lblMes->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(178, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"(Formato AAAA)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(178, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"(Formato MM)";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(185, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Nuevo Mes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(412, 40);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(282, 303);
			this->listBox1->TabIndex = 12;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(243, 182);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 23);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Agregar Evento";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(243, 221);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"ver eventos del dia";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(243, 260);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(149, 23);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Guardar Datos";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 28);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Agenda de ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(133, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 28);
			this->label6->TabIndex = 18;
			this->label6->Text = L"label6";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 387);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblMes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblAño);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->monthCalendar1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		String^ userActual = gcnew String(datosUsuario.usuario.c_str());
		label6->Text = userActual;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTime example = Convert::ToDateTime("01/"+ lblMes->Text + "/"+ lblAño->Text);
		monthCalendar1->SetDate(example);
		monthCalendar1->Visible = true;
		
	}
	private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		lblMes->Text = "";
		lblAño->Text = "";
		lblAño->Focused;
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {



	
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ date = monthCalendar1->SelectionRange->Start.ToString("dd MMM yyyy");
	MyForm1^ frmEventos = gcnew MyForm1(date);
	frmEventos->Show();

}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//Limpiando el ListBox
	listBox1->Items->Clear();
	// Fecha seleccionada en el monthCalendar
	String^ fechaSeleccionado = monthCalendar1->SelectionRange->Start.ToString("dd MMM yyyy");
	msclr::interop::marshal_context context;
	// Fecha Seleccionada convertida a std 
	std::string standarFechaSeleccionada= context.marshal_as<std::string>(fechaSeleccionado);
	// Impresion de la fecha Seleccionada en el ListBox
	listBox1->Items->Add("Eventos del: " + fechaSeleccionado);
	bool emptyEvents = false;
	String^ tipoEvento;
	String^ descripcionEvento;
	String^ prioridadEvento;
	// For each que recorre los dias Registrados (Dias con eventos)
	for each (dia diasRegistrados in datosUsuario.dias)
	{
		// Verifica si la fecha del dia registrado es igual a la fecha seleccionada en el monthCalendar
		if (diasRegistrados.fecha == standarFechaSeleccionada)
		{	
			// Recorre los eventos Registrados en el dia 
			multimap<std::string, eventosRegistrados>::iterator eventosEnDia = diasRegistrados.eventos.begin();
			while (eventosEnDia != diasRegistrados.eventos.end())
			{
			
				// Si la llave es actividad muestra las actividades
				if (eventosEnDia->first == "actividad")
				{
					listBox1->Items->Add("");
					// Convierte las propiedades de los eventos a String
					tipoEvento = gcnew String(eventosEnDia->first.c_str());
					descripcionEvento = gcnew String(eventosEnDia->second.Descripcion.c_str());
					prioridadEvento = gcnew String(eventosEnDia->second.prioridad.c_str());
					String^ horaInicio = gcnew String(eventosEnDia->second.horaInicio.c_str());
					String^ horaFin = gcnew String(eventosEnDia->second.horaFin.c_str());
					String^ lugarReunion = gcnew String(eventosEnDia->second.lugarReunion.c_str());
					String^ personaInvolucrada = gcnew String(eventosEnDia->second.personaInvolucrada.c_str());
					String^ materiales = gcnew String(eventosEnDia->second.materiales.c_str());

					// imprime las propiedades del evento en el ListBox
					listBox1->Items->Add("Tipo de Evento: " + tipoEvento);
					listBox1->Items->Add("Id del Evento: " + eventosEnDia->second.idEvento.ToString());
					listBox1->Items->Add("Descripcion del Evento: " + descripcionEvento);
					listBox1->Items->Add("prioridad del Evento: " + prioridadEvento);
					listBox1->Items->Add("Hora de Inicio: " + horaInicio);
					listBox1->Items->Add("Hora de Finalizacion: " + horaFin);
					listBox1->Items->Add("Lugar de Reunion: " + lugarReunion);
					listBox1->Items->Add("Persona Involucrada: " + personaInvolucrada);
					listBox1->Items->Add("Materiales: " + materiales);

				}
				// Si la llave es Recordatorio muestra los Recordatorios
				if (eventosEnDia->first == "recordatorio")
				{
					listBox1->Items->Add("");
					tipoEvento = gcnew String(eventosEnDia->first.c_str());
					descripcionEvento = gcnew String(eventosEnDia->second.Descripcion.c_str());
					prioridadEvento = gcnew String(eventosEnDia->second.prioridad.c_str());
					String^ horaLimite = gcnew String(eventosEnDia->second.horaLimite.c_str());

					// imprime las propiedades del evento en el ListBox
					listBox1->Items->Add("Tipo de Evento: " + tipoEvento);
					listBox1->Items->Add("Id del Evento: " + eventosEnDia->second.idEvento.ToString());
					listBox1->Items->Add("Descripcion del Evento: " + descripcionEvento);
					listBox1->Items->Add("prioridad del Evento: " + prioridadEvento);
					listBox1->Items->Add("Hora Limite de Recordatorio: " + horaLimite);

				}

				// Si la llave es Àlarma muestra las Alarmas
				if (eventosEnDia->first == "alarma")
				{
					listBox1->Items->Add("");
					tipoEvento = gcnew String(eventosEnDia->first.c_str());
					descripcionEvento = gcnew String(eventosEnDia->second.Descripcion.c_str());
					prioridadEvento = gcnew String(eventosEnDia->second.prioridad.c_str());
					String^ horaLimite = gcnew String(eventosEnDia->second.horaLimite.c_str());

					// imprime las propiedades del evento en el ListBox
					listBox1->Items->Add("Tipo de Evento: " + tipoEvento);
					listBox1->Items->Add("Id del Evento: " + eventosEnDia->second.idEvento.ToString());
					listBox1->Items->Add("Descripcion del Evento: " + descripcionEvento);
					listBox1->Items->Add("prioridad del Evento: " + prioridadEvento);
					listBox1->Items->Add("Hora Limite de Recordatorio: " + horaLimite);
				}

				//Siguiente evento 
				eventosEnDia++;
			}
			listBox1->Items->Add("--------------------------------------------------------------");
			emptyEvents = false;
			break;
		}
		else {
			emptyEvents = true;
		}
	}

	if (emptyEvents)
	{
		listBox1->Items->Add("");
		listBox1->Items->Add("Aun no hay eventos agendados!");
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	ofstream file;
	file.open(datosUsuario.usuario +".txt");
	std::string idEvento;
	std::string fecha;
	msclr::interop::marshal_context context;
	vector<eventosRegistrados> vectorConEventos;
	std::string coleccion = "";
	for each (dia diasRegistrados in datosUsuario.dias)
	{
		multimap<std::string, eventosRegistrados>::iterator eventosEnDia = diasRegistrados.eventos.begin();
		coleccion = "";
		coleccion += diasRegistrados.fecha;
		while (eventosEnDia != diasRegistrados.eventos.end())
		{
			idEvento = context.marshal_as<std::string>(eventosEnDia->second.idEvento.ToString());
		
			if (eventosEnDia->first == "actividad")
			{
				coleccion += "," + eventosEnDia->first + "," + idEvento + "," + eventosEnDia->second.Descripcion + "," + eventosEnDia->second.prioridad + "," + eventosEnDia->second.horaInicio + "," + eventosEnDia->second.horaFin + "," + eventosEnDia->second.lugarReunion + "," + eventosEnDia->second.personaInvolucrada + "," + eventosEnDia->second.materiales;
			}
			if (eventosEnDia->first == "recordatorio")
			{
				coleccion += "," + eventosEnDia->first + "," + idEvento + "," + eventosEnDia->second.Descripcion + "," + eventosEnDia->second.prioridad + "," + eventosEnDia->second.horaLimite;

			}
			if (eventosEnDia->first == "alarma")
			{
				coleccion += "," + eventosEnDia->first + "," + idEvento + "," + eventosEnDia->second.Descripcion + "," + eventosEnDia->second.prioridad + "," + eventosEnDia->second.horaLimite;

			}
			eventosEnDia++;
		}
		file << coleccion + "\n";
	}

	file.close();
	System::Windows::Forms::MessageBox::Show("Datos guardados exitosamente!");
}
};
}
