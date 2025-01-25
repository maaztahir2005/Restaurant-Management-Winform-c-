#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include "user.h"
#include "menu.h"
#include "order.h"
#include "employee.h"
#include "bill.h"
#include "discountedbill.h"
#include "table.h"
#include "dbop.h"
#include "mapper.h"

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
      user^ ob;
    Form1(void)
    {
        ob = gcnew user();
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::TabControl^ tabControl1;
  protected:
  private: System::Windows::Forms::TabPage^ tabPage1;
  private: System::Windows::Forms::TabPage^ tabPage2;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::TextBox^ textBox2;
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::Button^ button6;
  private: System::Windows::Forms::Button^ button5;
  private: System::Windows::Forms::Button^ button4;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::Label^ label5;
  private: System::Windows::Forms::TabPage^ tabPage3;
  private: System::Windows::Forms::Label^ label7;
  private: System::Windows::Forms::Label^ label6;
  private: System::Windows::Forms::DataGridView^ dataGridView1;
  private: System::Windows::Forms::Button^ button11;
  private: System::Windows::Forms::Button^ button10;
  private: System::Windows::Forms::Button^ button9;
  private: System::Windows::Forms::Button^ button8;
  private: System::Windows::Forms::Button^ button7;
  private: System::Windows::Forms::TextBox^ textBox5;
  private: System::Windows::Forms::TextBox^ textBox4;
  private: System::Windows::Forms::TextBox^ textBox3;
  private: System::Windows::Forms::Label^ label8;
  private: System::Windows::Forms::TabPage^ tabPage4;
  private: System::Windows::Forms::Button^ button12;
  private: System::Windows::Forms::Button^ button13;
  private: System::Windows::Forms::Button^ button14;
  private: System::Windows::Forms::Button^ button15;
  private: System::Windows::Forms::Button^ button16;
  private: System::Windows::Forms::TextBox^ textBox6;
  private: System::Windows::Forms::TextBox^ textBox7;
  private: System::Windows::Forms::TextBox^ textBox8;
  private: System::Windows::Forms::Label^ label9;
  private: System::Windows::Forms::Label^ label10;
  private: System::Windows::Forms::Label^ label11;
  private: System::Windows::Forms::DataGridView^ dataGridView2;
  private: System::Windows::Forms::TabPage^ tabPage5;
  private: System::Windows::Forms::TextBox^ textBox12;
  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::Button^ button17;
  private: System::Windows::Forms::Button^ button18;
  private: System::Windows::Forms::Button^ button19;
  private: System::Windows::Forms::Button^ button20;
  private: System::Windows::Forms::Button^ button21;
  private: System::Windows::Forms::TextBox^ textBox9;
  private: System::Windows::Forms::TextBox^ textBox10;
  private: System::Windows::Forms::TextBox^ textBox11;
  private: System::Windows::Forms::Label^ label12;
  private: System::Windows::Forms::Label^ label13;
  private: System::Windows::Forms::Label^ label14;
  private: System::Windows::Forms::DataGridView^ dataGridView3;
  private: System::Windows::Forms::TabPage^ tabPage6;
  private: System::Windows::Forms::Button^ button22;
  private: System::Windows::Forms::Button^ button23;
  private: System::Windows::Forms::Button^ button24;
  private: System::Windows::Forms::Button^ button25;
  private: System::Windows::Forms::Button^ button26;

  private: System::Windows::Forms::TextBox^ textBox15;
  private: System::Windows::Forms::TextBox^ textBox16;

  private: System::Windows::Forms::Label^ label18;
  private: System::Windows::Forms::Label^ label19;
  private: System::Windows::Forms::DataGridView^ dataGridView4;
  private: System::Windows::Forms::TabPage^ tabPage7;
  private: System::Windows::Forms::Button^ button27;
  private: System::Windows::Forms::Button^ button28;
  private: System::Windows::Forms::Button^ button29;
  private: System::Windows::Forms::Button^ button30;
  private: System::Windows::Forms::Button^ button31;
  private: System::Windows::Forms::TextBox^ textBox17;
  private: System::Windows::Forms::TextBox^ textBox18;
  private: System::Windows::Forms::Label^ label20;
  private: System::Windows::Forms::Label^ label21;
  private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label16;








  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
        this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
        this->button6 = (gcnew System::Windows::Forms::Button());
        this->button5 = (gcnew System::Windows::Forms::Button());
        this->button4 = (gcnew System::Windows::Forms::Button());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
        this->button11 = (gcnew System::Windows::Forms::Button());
        this->button10 = (gcnew System::Windows::Forms::Button());
        this->button9 = (gcnew System::Windows::Forms::Button());
        this->button8 = (gcnew System::Windows::Forms::Button());
        this->button7 = (gcnew System::Windows::Forms::Button());
        this->textBox5 = (gcnew System::Windows::Forms::TextBox());
        this->textBox4 = (gcnew System::Windows::Forms::TextBox());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->label8 = (gcnew System::Windows::Forms::Label());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
        this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
        this->button12 = (gcnew System::Windows::Forms::Button());
        this->button13 = (gcnew System::Windows::Forms::Button());
        this->button14 = (gcnew System::Windows::Forms::Button());
        this->button15 = (gcnew System::Windows::Forms::Button());
        this->button16 = (gcnew System::Windows::Forms::Button());
        this->textBox6 = (gcnew System::Windows::Forms::TextBox());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
        this->textBox8 = (gcnew System::Windows::Forms::TextBox());
        this->label9 = (gcnew System::Windows::Forms::Label());
        this->label10 = (gcnew System::Windows::Forms::Label());
        this->label11 = (gcnew System::Windows::Forms::Label());
        this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
        this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
        this->textBox12 = (gcnew System::Windows::Forms::TextBox());
        this->label15 = (gcnew System::Windows::Forms::Label());
        this->button17 = (gcnew System::Windows::Forms::Button());
        this->button18 = (gcnew System::Windows::Forms::Button());
        this->button19 = (gcnew System::Windows::Forms::Button());
        this->button20 = (gcnew System::Windows::Forms::Button());
        this->button21 = (gcnew System::Windows::Forms::Button());
        this->textBox9 = (gcnew System::Windows::Forms::TextBox());
        this->textBox10 = (gcnew System::Windows::Forms::TextBox());
        this->textBox11 = (gcnew System::Windows::Forms::TextBox());
        this->label12 = (gcnew System::Windows::Forms::Label());
        this->label13 = (gcnew System::Windows::Forms::Label());
        this->label14 = (gcnew System::Windows::Forms::Label());
        this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
        this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
        this->button22 = (gcnew System::Windows::Forms::Button());
        this->button23 = (gcnew System::Windows::Forms::Button());
        this->button24 = (gcnew System::Windows::Forms::Button());
        this->button25 = (gcnew System::Windows::Forms::Button());
        this->button26 = (gcnew System::Windows::Forms::Button());
        this->textBox15 = (gcnew System::Windows::Forms::TextBox());
        this->textBox16 = (gcnew System::Windows::Forms::TextBox());
        this->label18 = (gcnew System::Windows::Forms::Label());
        this->label19 = (gcnew System::Windows::Forms::Label());
        this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
        this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
        this->textBox13 = (gcnew System::Windows::Forms::TextBox());
        this->label16 = (gcnew System::Windows::Forms::Label());
        this->button27 = (gcnew System::Windows::Forms::Button());
        this->button28 = (gcnew System::Windows::Forms::Button());
        this->button29 = (gcnew System::Windows::Forms::Button());
        this->button30 = (gcnew System::Windows::Forms::Button());
        this->button31 = (gcnew System::Windows::Forms::Button());
        this->textBox17 = (gcnew System::Windows::Forms::TextBox());
        this->textBox18 = (gcnew System::Windows::Forms::TextBox());
        this->label20 = (gcnew System::Windows::Forms::Label());
        this->label21 = (gcnew System::Windows::Forms::Label());
        this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
        this->tabControl1->SuspendLayout();
        this->tabPage1->SuspendLayout();
        this->tabPage2->SuspendLayout();
        this->tabPage3->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->tabPage4->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
        this->tabPage5->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
        this->tabPage6->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
        this->tabPage7->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
        this->SuspendLayout();
        // 
        // tabControl1
        // 
        this->tabControl1->Controls->Add(this->tabPage1);
        this->tabControl1->Controls->Add(this->tabPage2);
        this->tabControl1->Controls->Add(this->tabPage3);
        this->tabControl1->Controls->Add(this->tabPage4);
        this->tabControl1->Controls->Add(this->tabPage5);
        this->tabControl1->Controls->Add(this->tabPage6);
        this->tabControl1->Controls->Add(this->tabPage7);
        this->tabControl1->Location = System::Drawing::Point(0, 0);
        this->tabControl1->Name = L"tabControl1";
        this->tabControl1->SelectedIndex = 0;
        this->tabControl1->Size = System::Drawing::Size(1179, 516);
        this->tabControl1->TabIndex = 0;
        // 
        // tabPage1
        // 
        this->tabPage1->BackColor = System::Drawing::Color::Silver;
        this->tabPage1->Controls->Add(this->label1);
        this->tabPage1->Controls->Add(this->button1);
        this->tabPage1->Controls->Add(this->textBox2);
        this->tabPage1->Controls->Add(this->textBox1);
        this->tabPage1->Controls->Add(this->label4);
        this->tabPage1->Controls->Add(this->label3);
        this->tabPage1->Controls->Add(this->label2);
        this->tabPage1->Location = System::Drawing::Point(4, 29);
        this->tabPage1->Name = L"tabPage1";
        this->tabPage1->Padding = System::Windows::Forms::Padding(3);
        this->tabPage1->Size = System::Drawing::Size(1171, 483);
        this->tabPage1->TabIndex = 0;
        this->tabPage1->Text = L"Login Page";
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->BackColor = System::Drawing::Color::Aqua;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
        this->label1->Location = System::Drawing::Point(308, 42);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(548, 46);
        this->label1->TabIndex = 7;
        this->label1->Text = L"Resturant Management System";
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::Lavender;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(500, 378);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(133, 57);
        this->button1->TabIndex = 6;
        this->button1->Text = L"Login";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // textBox2
        // 
        this->textBox2->BackColor = System::Drawing::SystemColors::Info;
        this->textBox2->Location = System::Drawing::Point(500, 292);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(133, 26);
        this->textBox2->TabIndex = 5;
        // 
        // textBox1
        // 
        this->textBox1->BackColor = System::Drawing::SystemColors::Info;
        this->textBox1->Location = System::Drawing::Point(500, 185);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(133, 26);
        this->textBox1->TabIndex = 4;
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label4->Location = System::Drawing::Point(507, 241);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(106, 25);
        this->label4->TabIndex = 3;
        this->label4->Text = L"Password";
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->Location = System::Drawing::Point(507, 133);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(110, 25);
        this->label3->TabIndex = 2;
        this->label3->Text = L"Username";
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(534, 32);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(0, 20);
        this->label2->TabIndex = 1;
        // 
        // tabPage2
        // 
        this->tabPage2->BackColor = System::Drawing::Color::Silver;
        this->tabPage2->Controls->Add(this->button6);
        this->tabPage2->Controls->Add(this->button5);
        this->tabPage2->Controls->Add(this->button4);
        this->tabPage2->Controls->Add(this->button3);
        this->tabPage2->Controls->Add(this->button2);
        this->tabPage2->Controls->Add(this->label5);
        this->tabPage2->Location = System::Drawing::Point(4, 29);
        this->tabPage2->Name = L"tabPage2";
        this->tabPage2->Padding = System::Windows::Forms::Padding(3);
        this->tabPage2->Size = System::Drawing::Size(1171, 483);
        this->tabPage2->TabIndex = 1;
        this->tabPage2->Text = L"Home Page";
        // 
        // button6
        // 
        this->button6->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button6->Location = System::Drawing::Point(451, 341);
        this->button6->Name = L"button6";
        this->button6->Size = System::Drawing::Size(184, 37);
        this->button6->TabIndex = 5;
        this->button6->Text = L"Generate Bill";
        this->button6->UseVisualStyleBackColor = false;
        this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
        // 
        // button5
        // 
        this->button5->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button5->Location = System::Drawing::Point(260, 248);
        this->button5->Name = L"button5";
        this->button5->Size = System::Drawing::Size(136, 35);
        this->button5->TabIndex = 4;
        this->button5->Text = L"Table";
        this->button5->UseVisualStyleBackColor = false;
        this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
        // 
        // button4
        // 
        this->button4->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button4->Location = System::Drawing::Point(721, 104);
        this->button4->Name = L"button4";
        this->button4->Size = System::Drawing::Size(151, 36);
        this->button4->TabIndex = 3;
        this->button4->Text = L"Order";
        this->button4->UseVisualStyleBackColor = false;
        this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
        // 
        // button3
        // 
        this->button3->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button3->Location = System::Drawing::Point(721, 248);
        this->button3->Name = L"button3";
        this->button3->Size = System::Drawing::Size(151, 35);
        this->button3->TabIndex = 2;
        this->button3->Text = L"Emp Salary";
        this->button3->UseVisualStyleBackColor = false;
        this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
        // 
        // button2
        // 
        this->button2->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button2->Location = System::Drawing::Point(260, 104);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(136, 36);
        this->button2->TabIndex = 1;
        this->button2->Text = L"Menu";
        this->button2->UseVisualStyleBackColor = false;
        this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->BackColor = System::Drawing::Color::Cyan;
        this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label5->Location = System::Drawing::Point(472, 25);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(153, 46);
        this->label5->TabIndex = 0;
        this->label5->Text = L"Options";
        // 
        // tabPage3
        // 
        this->tabPage3->BackColor = System::Drawing::Color::Silver;
        this->tabPage3->Controls->Add(this->button11);
        this->tabPage3->Controls->Add(this->button10);
        this->tabPage3->Controls->Add(this->button9);
        this->tabPage3->Controls->Add(this->button8);
        this->tabPage3->Controls->Add(this->button7);
        this->tabPage3->Controls->Add(this->textBox5);
        this->tabPage3->Controls->Add(this->textBox4);
        this->tabPage3->Controls->Add(this->textBox3);
        this->tabPage3->Controls->Add(this->label8);
        this->tabPage3->Controls->Add(this->label7);
        this->tabPage3->Controls->Add(this->label6);
        this->tabPage3->Controls->Add(this->dataGridView1);
        this->tabPage3->Location = System::Drawing::Point(4, 29);
        this->tabPage3->Name = L"tabPage3";
        this->tabPage3->Padding = System::Windows::Forms::Padding(3);
        this->tabPage3->Size = System::Drawing::Size(1171, 483);
        this->tabPage3->TabIndex = 2;
        this->tabPage3->Text = L"Menu";
        // 
        // button11
        // 
        this->button11->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button11->Location = System::Drawing::Point(586, 339);
        this->button11->Name = L"button11";
        this->button11->Size = System::Drawing::Size(112, 31);
        this->button11->TabIndex = 11;
        this->button11->Text = L"Back";
        this->button11->UseVisualStyleBackColor = false;
        this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
        // 
        // button10
        // 
        this->button10->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button10->Location = System::Drawing::Point(919, 268);
        this->button10->Name = L"button10";
        this->button10->Size = System::Drawing::Size(117, 40);
        this->button10->TabIndex = 10;
        this->button10->Text = L"Search";
        this->button10->UseVisualStyleBackColor = false;
        this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
        // 
        // button9
        // 
        this->button9->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button9->Location = System::Drawing::Point(664, 268);
        this->button9->Name = L"button9";
        this->button9->Size = System::Drawing::Size(120, 40);
        this->button9->TabIndex = 9;
        this->button9->Text = L"Update";
        this->button9->UseVisualStyleBackColor = false;
        this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
        // 
        // button8
        // 
        this->button8->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button8->Location = System::Drawing::Point(919, 170);
        this->button8->Name = L"button8";
        this->button8->Size = System::Drawing::Size(117, 41);
        this->button8->TabIndex = 8;
        this->button8->Text = L"Delete";
        this->button8->UseVisualStyleBackColor = false;
        this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
        // 
        // button7
        // 
        this->button7->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button7->Location = System::Drawing::Point(664, 170);
        this->button7->Name = L"button7";
        this->button7->Size = System::Drawing::Size(120, 41);
        this->button7->TabIndex = 7;
        this->button7->Text = L"Add";
        this->button7->UseVisualStyleBackColor = false;
        this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
        // 
        // textBox5
        // 
        this->textBox5->BackColor = System::Drawing::SystemColors::Info;
        this->textBox5->Location = System::Drawing::Point(992, 87);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(100, 26);
        this->textBox5->TabIndex = 6;
        // 
        // textBox4
        // 
        this->textBox4->BackColor = System::Drawing::SystemColors::Info;
        this->textBox4->Location = System::Drawing::Point(798, 87);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(100, 26);
        this->textBox4->TabIndex = 5;
        // 
        // textBox3
        // 
        this->textBox3->BackColor = System::Drawing::SystemColors::Info;
        this->textBox3->Location = System::Drawing::Point(586, 87);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(100, 26);
        this->textBox3->TabIndex = 4;
        // 
        // label8
        // 
        this->label8->AutoSize = true;
        this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label8->Location = System::Drawing::Point(992, 32);
        this->label8->Name = L"label8";
        this->label8->Size = System::Drawing::Size(100, 25);
        this->label8->TabIndex = 3;
        this->label8->Text = L"Category";
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label7->Location = System::Drawing::Point(802, 32);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(61, 25);
        this->label7->TabIndex = 2;
        this->label7->Text = L"Price";
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label6->Location = System::Drawing::Point(599, 32);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(68, 25);
        this->label6->TabIndex = 1;
        this->label6->Text = L"Name";
        // 
        // dataGridView1
        // 
        this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
        this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView1->Location = System::Drawing::Point(18, 21);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->RowHeadersWidth = 62;
        this->dataGridView1->RowTemplate->Height = 28;
        this->dataGridView1->Size = System::Drawing::Size(544, 441);
        this->dataGridView1->TabIndex = 0;
        // 
        // tabPage4
        // 
        this->tabPage4->BackColor = System::Drawing::Color::Silver;
        this->tabPage4->Controls->Add(this->button12);
        this->tabPage4->Controls->Add(this->button13);
        this->tabPage4->Controls->Add(this->button14);
        this->tabPage4->Controls->Add(this->button15);
        this->tabPage4->Controls->Add(this->button16);
        this->tabPage4->Controls->Add(this->textBox6);
        this->tabPage4->Controls->Add(this->textBox7);
        this->tabPage4->Controls->Add(this->textBox8);
        this->tabPage4->Controls->Add(this->label9);
        this->tabPage4->Controls->Add(this->label10);
        this->tabPage4->Controls->Add(this->label11);
        this->tabPage4->Controls->Add(this->dataGridView2);
        this->tabPage4->Location = System::Drawing::Point(4, 29);
        this->tabPage4->Name = L"tabPage4";
        this->tabPage4->Padding = System::Windows::Forms::Padding(3);
        this->tabPage4->Size = System::Drawing::Size(1171, 483);
        this->tabPage4->TabIndex = 3;
        this->tabPage4->Text = L"Order";
        // 
        // button12
        // 
        this->button12->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button12->Location = System::Drawing::Point(622, 363);
        this->button12->Name = L"button12";
        this->button12->Size = System::Drawing::Size(112, 31);
        this->button12->TabIndex = 23;
        this->button12->Text = L"Back";
        this->button12->UseVisualStyleBackColor = false;
        this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
        // 
        // button13
        // 
        this->button13->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button13->Location = System::Drawing::Point(949, 282);
        this->button13->Name = L"button13";
        this->button13->Size = System::Drawing::Size(117, 40);
        this->button13->TabIndex = 22;
        this->button13->Text = L"Search";
        this->button13->UseVisualStyleBackColor = false;
        this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
        // 
        // button14
        // 
        this->button14->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button14->Location = System::Drawing::Point(694, 282);
        this->button14->Name = L"button14";
        this->button14->Size = System::Drawing::Size(120, 40);
        this->button14->TabIndex = 21;
        this->button14->Text = L"Update";
        this->button14->UseVisualStyleBackColor = false;
        this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
        // 
        // button15
        // 
        this->button15->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button15->Location = System::Drawing::Point(949, 184);
        this->button15->Name = L"button15";
        this->button15->Size = System::Drawing::Size(117, 41);
        this->button15->TabIndex = 20;
        this->button15->Text = L"Delete";
        this->button15->UseVisualStyleBackColor = false;
        this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
        // 
        // button16
        // 
        this->button16->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button16->Location = System::Drawing::Point(694, 184);
        this->button16->Name = L"button16";
        this->button16->Size = System::Drawing::Size(120, 41);
        this->button16->TabIndex = 19;
        this->button16->Text = L"Add";
        this->button16->UseVisualStyleBackColor = false;
        this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
        // 
        // textBox6
        // 
        this->textBox6->BackColor = System::Drawing::SystemColors::Info;
        this->textBox6->Location = System::Drawing::Point(634, 87);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(100, 26);
        this->textBox6->TabIndex = 18;
        // 
        // textBox7
        // 
        this->textBox7->BackColor = System::Drawing::SystemColors::Info;
        this->textBox7->Location = System::Drawing::Point(828, 87);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(100, 26);
        this->textBox7->TabIndex = 17;
        // 
        // textBox8
        // 
        this->textBox8->BackColor = System::Drawing::SystemColors::Info;
        this->textBox8->Location = System::Drawing::Point(1015, 87);
        this->textBox8->Name = L"textBox8";
        this->textBox8->Size = System::Drawing::Size(100, 26);
        this->textBox8->TabIndex = 16;
        // 
        // label9
        // 
        this->label9->AutoSize = true;
        this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label9->Location = System::Drawing::Point(1022, 32);
        this->label9->Name = L"label9";
        this->label9->Size = System::Drawing::Size(93, 25);
        this->label9->TabIndex = 15;
        this->label9->Text = L"Quantity";
        // 
        // label10
        // 
        this->label10->AutoSize = true;
        this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label10->Location = System::Drawing::Point(832, 32);
        this->label10->Name = L"label10";
        this->label10->Size = System::Drawing::Size(53, 25);
        this->label10->TabIndex = 14;
        this->label10->Text = L"Item";
        // 
        // label11
        // 
        this->label11->AutoSize = true;
        this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label11->Location = System::Drawing::Point(629, 32);
        this->label11->Name = L"label11";
        this->label11->Size = System::Drawing::Size(105, 25);
        this->label11->TabIndex = 13;
        this->label11->Text = L"Customer";
        // 
        // dataGridView2
        // 
        this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
        this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView2->Location = System::Drawing::Point(48, 21);
        this->dataGridView2->Name = L"dataGridView2";
        this->dataGridView2->RowHeadersWidth = 62;
        this->dataGridView2->RowTemplate->Height = 28;
        this->dataGridView2->Size = System::Drawing::Size(544, 441);
        this->dataGridView2->TabIndex = 12;
        // 
        // tabPage5
        // 
        this->tabPage5->BackColor = System::Drawing::Color::Silver;
        this->tabPage5->Controls->Add(this->textBox12);
        this->tabPage5->Controls->Add(this->label15);
        this->tabPage5->Controls->Add(this->button17);
        this->tabPage5->Controls->Add(this->button18);
        this->tabPage5->Controls->Add(this->button19);
        this->tabPage5->Controls->Add(this->button20);
        this->tabPage5->Controls->Add(this->button21);
        this->tabPage5->Controls->Add(this->textBox9);
        this->tabPage5->Controls->Add(this->textBox10);
        this->tabPage5->Controls->Add(this->textBox11);
        this->tabPage5->Controls->Add(this->label12);
        this->tabPage5->Controls->Add(this->label13);
        this->tabPage5->Controls->Add(this->label14);
        this->tabPage5->Controls->Add(this->dataGridView3);
        this->tabPage5->Location = System::Drawing::Point(4, 29);
        this->tabPage5->Name = L"tabPage5";
        this->tabPage5->Padding = System::Windows::Forms::Padding(3);
        this->tabPage5->Size = System::Drawing::Size(1171, 483);
        this->tabPage5->TabIndex = 4;
        this->tabPage5->Text = L"Employee";
        // 
        // textBox12
        // 
        this->textBox12->BackColor = System::Drawing::SystemColors::Info;
        this->textBox12->Location = System::Drawing::Point(997, 87);
        this->textBox12->Name = L"textBox12";
        this->textBox12->Size = System::Drawing::Size(100, 26);
        this->textBox12->TabIndex = 37;
        // 
        // label15
        // 
        this->label15->AutoSize = true;
        this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label15->Location = System::Drawing::Point(992, 32);
        this->label15->Name = L"label15";
        this->label15->Size = System::Drawing::Size(73, 25);
        this->label15->TabIndex = 36;
        this->label15->Text = L"Bonus";
        // 
        // button17
        // 
        this->button17->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button17->Location = System::Drawing::Point(612, 344);
        this->button17->Name = L"button17";
        this->button17->Size = System::Drawing::Size(112, 31);
        this->button17->TabIndex = 35;
        this->button17->Text = L"Back";
        this->button17->UseVisualStyleBackColor = false;
        this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
        // 
        // button18
        // 
        this->button18->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button18->Location = System::Drawing::Point(949, 272);
        this->button18->Name = L"button18";
        this->button18->Size = System::Drawing::Size(117, 40);
        this->button18->TabIndex = 34;
        this->button18->Text = L"Search";
        this->button18->UseVisualStyleBackColor = false;
        this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
        // 
        // button19
        // 
        this->button19->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button19->Location = System::Drawing::Point(720, 272);
        this->button19->Name = L"button19";
        this->button19->Size = System::Drawing::Size(120, 40);
        this->button19->TabIndex = 33;
        this->button19->Text = L"Update";
        this->button19->UseVisualStyleBackColor = false;
        this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
        // 
        // button20
        // 
        this->button20->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button20->Location = System::Drawing::Point(949, 167);
        this->button20->Name = L"button20";
        this->button20->Size = System::Drawing::Size(117, 41);
        this->button20->TabIndex = 32;
        this->button20->Text = L"Delete";
        this->button20->UseVisualStyleBackColor = false;
        this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
        // 
        // button21
        // 
        this->button21->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button21->Location = System::Drawing::Point(720, 167);
        this->button21->Name = L"button21";
        this->button21->Size = System::Drawing::Size(120, 41);
        this->button21->TabIndex = 31;
        this->button21->Text = L"Add";
        this->button21->UseVisualStyleBackColor = false;
        this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
        // 
        // textBox9
        // 
        this->textBox9->BackColor = System::Drawing::SystemColors::Info;
        this->textBox9->Location = System::Drawing::Point(871, 87);
        this->textBox9->Name = L"textBox9";
        this->textBox9->Size = System::Drawing::Size(100, 26);
        this->textBox9->TabIndex = 30;
        // 
        // textBox10
        // 
        this->textBox10->BackColor = System::Drawing::SystemColors::Info;
        this->textBox10->Location = System::Drawing::Point(740, 87);
        this->textBox10->Name = L"textBox10";
        this->textBox10->Size = System::Drawing::Size(100, 26);
        this->textBox10->TabIndex = 29;
        // 
        // textBox11
        // 
        this->textBox11->BackColor = System::Drawing::SystemColors::Info;
        this->textBox11->Location = System::Drawing::Point(612, 87);
        this->textBox11->Name = L"textBox11";
        this->textBox11->Size = System::Drawing::Size(100, 26);
        this->textBox11->TabIndex = 28;
        // 
        // label12
        // 
        this->label12->AutoSize = true;
        this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label12->Location = System::Drawing::Point(866, 32);
        this->label12->Name = L"label12";
        this->label12->Size = System::Drawing::Size(74, 25);
        this->label12->TabIndex = 27;
        this->label12->Text = L"Salary";
        // 
        // label13
        // 
        this->label13->AutoSize = true;
        this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label13->Location = System::Drawing::Point(735, 32);
        this->label13->Name = L"label13";
        this->label13->Size = System::Drawing::Size(89, 25);
        this->label13->TabIndex = 26;
        this->label13->Text = L"Position";
        // 
        // label14
        // 
        this->label14->AutoSize = true;
        this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label14->Location = System::Drawing::Point(607, 32);
        this->label14->Name = L"label14";
        this->label14->Size = System::Drawing::Size(68, 25);
        this->label14->TabIndex = 25;
        this->label14->Text = L"Name";
        // 
        // dataGridView3
        // 
        this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
        this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView3->Location = System::Drawing::Point(48, 21);
        this->dataGridView3->Name = L"dataGridView3";
        this->dataGridView3->RowHeadersWidth = 62;
        this->dataGridView3->RowTemplate->Height = 28;
        this->dataGridView3->Size = System::Drawing::Size(544, 441);
        this->dataGridView3->TabIndex = 24;
        // 
        // tabPage6
        // 
        this->tabPage6->BackColor = System::Drawing::Color::Silver;
        this->tabPage6->Controls->Add(this->button22);
        this->tabPage6->Controls->Add(this->button23);
        this->tabPage6->Controls->Add(this->button24);
        this->tabPage6->Controls->Add(this->button25);
        this->tabPage6->Controls->Add(this->button26);
        this->tabPage6->Controls->Add(this->textBox15);
        this->tabPage6->Controls->Add(this->textBox16);
        this->tabPage6->Controls->Add(this->label18);
        this->tabPage6->Controls->Add(this->label19);
        this->tabPage6->Controls->Add(this->dataGridView4);
        this->tabPage6->Location = System::Drawing::Point(4, 29);
        this->tabPage6->Name = L"tabPage6";
        this->tabPage6->Padding = System::Windows::Forms::Padding(3);
        this->tabPage6->Size = System::Drawing::Size(1171, 483);
        this->tabPage6->TabIndex = 5;
        this->tabPage6->Text = L"Bill";
        // 
        // button22
        // 
        this->button22->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button22->Location = System::Drawing::Point(643, 345);
        this->button22->Name = L"button22";
        this->button22->Size = System::Drawing::Size(112, 31);
        this->button22->TabIndex = 49;
        this->button22->Text = L"Back";
        this->button22->UseVisualStyleBackColor = false;
        this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
        // 
        // button23
        // 
        this->button23->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button23->Location = System::Drawing::Point(961, 274);
        this->button23->Name = L"button23";
        this->button23->Size = System::Drawing::Size(117, 40);
        this->button23->TabIndex = 48;
        this->button23->Text = L"Search";
        this->button23->UseVisualStyleBackColor = false;
        this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
        // 
        // button24
        // 
        this->button24->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button24->Location = System::Drawing::Point(707, 274);
        this->button24->Name = L"button24";
        this->button24->Size = System::Drawing::Size(120, 40);
        this->button24->TabIndex = 47;
        this->button24->Text = L"Update";
        this->button24->UseVisualStyleBackColor = false;
        this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
        // 
        // button25
        // 
        this->button25->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button25->Location = System::Drawing::Point(961, 172);
        this->button25->Name = L"button25";
        this->button25->Size = System::Drawing::Size(117, 41);
        this->button25->TabIndex = 46;
        this->button25->Text = L"Delete";
        this->button25->UseVisualStyleBackColor = false;
        this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
        // 
        // button26
        // 
        this->button26->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button26->Location = System::Drawing::Point(707, 172);
        this->button26->Name = L"button26";
        this->button26->Size = System::Drawing::Size(120, 41);
        this->button26->TabIndex = 45;
        this->button26->Text = L"Add";
        this->button26->UseVisualStyleBackColor = false;
        this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
        // 
        // textBox15
        // 
        this->textBox15->BackColor = System::Drawing::SystemColors::Info;
        this->textBox15->Location = System::Drawing::Point(961, 78);
        this->textBox15->Name = L"textBox15";
        this->textBox15->Size = System::Drawing::Size(100, 26);
        this->textBox15->TabIndex = 43;
        // 
        // textBox16
        // 
        this->textBox16->BackColor = System::Drawing::SystemColors::Info;
        this->textBox16->Location = System::Drawing::Point(707, 89);
        this->textBox16->Name = L"textBox16";
        this->textBox16->Size = System::Drawing::Size(100, 26);
        this->textBox16->TabIndex = 42;
        // 
        // label18
        // 
        this->label18->AutoSize = true;
        this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label18->Location = System::Drawing::Point(956, 31);
        this->label18->Name = L"label18";
        this->label18->Size = System::Drawing::Size(61, 25);
        this->label18->TabIndex = 40;
        this->label18->Text = L"Price";
        // 
        // label19
        // 
        this->label19->AutoSize = true;
        this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label19->Location = System::Drawing::Point(702, 31);
        this->label19->Name = L"label19";
        this->label19->Size = System::Drawing::Size(53, 25);
        this->label19->TabIndex = 39;
        this->label19->Text = L"Item";
        // 
        // dataGridView4
        // 
        this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
        this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView4->Location = System::Drawing::Point(61, 21);
        this->dataGridView4->Name = L"dataGridView4";
        this->dataGridView4->RowHeadersWidth = 62;
        this->dataGridView4->RowTemplate->Height = 28;
        this->dataGridView4->Size = System::Drawing::Size(544, 441);
        this->dataGridView4->TabIndex = 38;
        // 
        // tabPage7
        // 
        this->tabPage7->BackColor = System::Drawing::Color::Silver;
        this->tabPage7->Controls->Add(this->textBox13);
        this->tabPage7->Controls->Add(this->label16);
        this->tabPage7->Controls->Add(this->button27);
        this->tabPage7->Controls->Add(this->button28);
        this->tabPage7->Controls->Add(this->button29);
        this->tabPage7->Controls->Add(this->button30);
        this->tabPage7->Controls->Add(this->button31);
        this->tabPage7->Controls->Add(this->textBox17);
        this->tabPage7->Controls->Add(this->textBox18);
        this->tabPage7->Controls->Add(this->label20);
        this->tabPage7->Controls->Add(this->label21);
        this->tabPage7->Controls->Add(this->dataGridView5);
        this->tabPage7->Location = System::Drawing::Point(4, 29);
        this->tabPage7->Name = L"tabPage7";
        this->tabPage7->Padding = System::Windows::Forms::Padding(3);
        this->tabPage7->Size = System::Drawing::Size(1171, 483);
        this->tabPage7->TabIndex = 6;
        this->tabPage7->Text = L"Table";
        // 
        // textBox13
        // 
        this->textBox13->BackColor = System::Drawing::SystemColors::Info;
        this->textBox13->Location = System::Drawing::Point(631, 87);
        this->textBox13->Name = L"textBox13";
        this->textBox13->Size = System::Drawing::Size(100, 26);
        this->textBox13->TabIndex = 63;
        // 
        // label16
        // 
        this->label16->AutoSize = true;
        this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label16->Location = System::Drawing::Point(626, 32);
        this->label16->Name = L"label16";
        this->label16->Size = System::Drawing::Size(105, 25);
        this->label16->TabIndex = 62;
        this->label16->Text = L"Customer";
        // 
        // button27
        // 
        this->button27->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button27->Location = System::Drawing::Point(631, 348);
        this->button27->Name = L"button27";
        this->button27->Size = System::Drawing::Size(112, 31);
        this->button27->TabIndex = 61;
        this->button27->Text = L"Back";
        this->button27->UseVisualStyleBackColor = false;
        this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
        // 
        // button28
        // 
        this->button28->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button28->Location = System::Drawing::Point(966, 275);
        this->button28->Name = L"button28";
        this->button28->Size = System::Drawing::Size(117, 40);
        this->button28->TabIndex = 60;
        this->button28->Text = L"Search";
        this->button28->UseVisualStyleBackColor = false;
        this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
        // 
        // button29
        // 
        this->button29->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button29->Location = System::Drawing::Point(722, 275);
        this->button29->Name = L"button29";
        this->button29->Size = System::Drawing::Size(120, 40);
        this->button29->TabIndex = 59;
        this->button29->Text = L"Update";
        this->button29->UseVisualStyleBackColor = false;
        this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
        // 
        // button30
        // 
        this->button30->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button30->Location = System::Drawing::Point(966, 166);
        this->button30->Name = L"button30";
        this->button30->Size = System::Drawing::Size(117, 41);
        this->button30->TabIndex = 58;
        this->button30->Text = L"Delete";
        this->button30->UseVisualStyleBackColor = false;
        this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
        // 
        // button31
        // 
        this->button31->BackColor = System::Drawing::Color::PaleTurquoise;
        this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button31->Location = System::Drawing::Point(722, 166);
        this->button31->Name = L"button31";
        this->button31->Size = System::Drawing::Size(120, 41);
        this->button31->TabIndex = 57;
        this->button31->Text = L"Add";
        this->button31->UseVisualStyleBackColor = false;
        this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
        // 
        // textBox17
        // 
        this->textBox17->BackColor = System::Drawing::SystemColors::Info;
        this->textBox17->Location = System::Drawing::Point(833, 78);
        this->textBox17->Name = L"textBox17";
        this->textBox17->Size = System::Drawing::Size(100, 26);
        this->textBox17->TabIndex = 55;
        // 
        // textBox18
        // 
        this->textBox18->BackColor = System::Drawing::SystemColors::Info;
        this->textBox18->Location = System::Drawing::Point(1019, 78);
        this->textBox18->Name = L"textBox18";
        this->textBox18->Size = System::Drawing::Size(100, 26);
        this->textBox18->TabIndex = 54;
        // 
        // label20
        // 
        this->label20->AutoSize = true;
        this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label20->Location = System::Drawing::Point(828, 32);
        this->label20->Name = L"label20";
        this->label20->Size = System::Drawing::Size(68, 25);
        this->label20->TabIndex = 52;
        this->label20->Text = L"Seats";
        // 
        // label21
        // 
        this->label21->AutoSize = true;
        this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label21->Location = System::Drawing::Point(989, 32);
        this->label21->Name = L"label21";
        this->label21->Size = System::Drawing::Size(148, 25);
        this->label21->TabIndex = 51;
        this->label21->Text = L"Table Number";
        // 
        // dataGridView5
        // 
        this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
        this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView5->Location = System::Drawing::Point(6, 16);
        this->dataGridView5->Name = L"dataGridView5";
        this->dataGridView5->RowHeadersWidth = 62;
        this->dataGridView5->RowTemplate->Height = 28;
        this->dataGridView5->Size = System::Drawing::Size(544, 441);
        this->dataGridView5->TabIndex = 50;
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(1253, 545);
        this->Controls->Add(this->tabControl1);
        this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
        this->Name = L"Form1";
        this->Text = L"Form1";
        this->tabControl1->ResumeLayout(false);
        this->tabPage1->ResumeLayout(false);
        this->tabPage1->PerformLayout();
        this->tabPage2->ResumeLayout(false);
        this->tabPage2->PerformLayout();
        this->tabPage3->ResumeLayout(false);
        this->tabPage3->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->tabPage4->ResumeLayout(false);
        this->tabPage4->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
        this->tabPage5->ResumeLayout(false);
        this->tabPage5->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
        this->tabPage6->ResumeLayout(false);
        this->tabPage6->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
        this->tabPage7->ResumeLayout(false);
        this->tabPage7->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
        this->ResumeLayout(false);

    }
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ x = System::Convert::ToString(textBox1->Text);
    String^ y = System::Convert::ToString(textBox2->Text);

    if (x == ob->getuser() && y == ob->getpass()) {
        MessageBox::Show("Login Successfully");
        tabControl1->SelectedIndex = 1;
    }
    else {
        MessageBox::Show("Login Failed");
    }
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    menu ob1;
    ob1.name = textBox3->Text;
    ob1.price = textBox4->Text;
    ob1.category = textBox5->Text;
    crud.insert(r + "Menu.txt", ob1.name + "," + ob1.price + "," + ob1.category);

    dataGridView1->Columns->Clear();
    dataGridView1->Rows->Clear();

    cli::array<menu^>^ m;
    m = mapper::map_menu(crud.read(r + "Menu.txt"));

    dataGridView1->Columns->Add("c1", "name");
    dataGridView1->Columns->Add("c2", "price");
    dataGridView1->Columns->Add("c3", "category");

    for (int i = 0; i < m->Length; i++) {
        dataGridView1->Rows->Add(m[i]->name, m[i]->price, m[i]->category);
    }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 2;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    menu ob1;
    ob1.name = textBox3->Text;
    ob1.price = textBox4->Text;
    ob1.category = textBox5->Text;
    crud.discard(r + "Menu.txt", ob1.name, 0);

    dataGridView1->Columns->Clear();
    dataGridView1->Rows->Clear();

    cli::array<menu^>^ m = mapper::map_menu(crud.read(r + "Menu.txt"));

    dataGridView1->Columns->Add("c1", "name");
    dataGridView1->Columns->Add("c2", "price");
    dataGridView1->Columns->Add("c3", "category");

    for (int i = 0; i < m->Length; i++) {
        dataGridView1->Rows->Add(m[i]->name, m[i]->price, m[i]->category);
    }
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    menu ob1;
    ob1.name = textBox3->Text;
    ob1.price = textBox4->Text;
    ob1.category = textBox5->Text;
    crud.update(r + "Menu.txt", ob1.name, 0, ob1.name + "," + ob1.price + "," + ob1.category);

    dataGridView1->Columns->Clear();
    dataGridView1->Rows->Clear();

    cli::array<menu^>^ m = mapper::map_menu(crud.read(r + "Menu.txt"));

    dataGridView1->Columns->Add("c1", "name");
    dataGridView1->Columns->Add("c2", "price");
    dataGridView1->Columns->Add("c3", "category");

    for (int i = 0; i < m->Length; i++) {
        dataGridView1->Rows->Add(m[i]->name, m[i]->price, m[i]->category);
    }
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    menu ob1;
    ob1.name = textBox3->Text;
    ob1.price = textBox4->Text;
    ob1.category = textBox5->Text;

    dataGridView1->Columns->Clear();
    dataGridView1->Rows->Clear();

    cli::array<menu^>^ m;
    if (ob1.name == "*") {
        m = mapper::map_menu(crud.read(r + "Menu.txt"));
    }
    else {
        m = mapper::map_menu(crud.search(r + "Menu.txt", ob1.name, 0));
    }

    dataGridView1->Columns->Add("c1", "name");
    dataGridView1->Columns->Add("c2", "price");
    dataGridView1->Columns->Add("c3", "category");

    for (int i = 0; i < m->Length; i++) {
        dataGridView1->Rows->Add(m[i]->name, m[i]->price, m[i]->category);
    }
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 1;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 3;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    order ob1;
    ob1.customer = textBox6->Text;
    ob1.item = textBox7->Text;
    ob1.quantity = textBox8->Text;
    crud.insert(r + "Order.txt", ob1.customer + "," + ob1.item + "," + ob1.quantity);

    dataGridView2->Columns->Clear();
    dataGridView2->Rows->Clear();

    cli::array<order^>^ o;
    o = mapper::map_order(crud.read(r + "Order.txt"));

    dataGridView2->Columns->Add("c1", "Customer");
    dataGridView2->Columns->Add("c2", "Item");
    dataGridView2->Columns->Add("c3", "Quantity");

    for (int i = 0; i < o->Length; i++) {
        dataGridView2->Rows->Add(o[i]->customer, o[i]->item, o[i]->quantity);
    }

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    order ob1;
    ob1.customer = textBox6->Text;
    ob1.item = textBox7->Text;
    ob1.quantity = textBox8->Text;
    crud.discard(r + "Order.txt", ob1.customer, 0);

    dataGridView2->Columns->Clear();
    dataGridView2->Rows->Clear();

    cli::array<order^>^ o;
    o = mapper::map_order(crud.read(r + "Order.txt"));

    dataGridView2->Columns->Add("c1", "Customer");
    dataGridView2->Columns->Add("c2", "Item");
    dataGridView2->Columns->Add("c3", "Quantity");

    for (int i = 0; i < o->Length; i++) {
        dataGridView2->Rows->Add(o[i]->customer, o[i]->item, o[i]->quantity);
    }
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    order ob1;
    ob1.customer = textBox6->Text;
    ob1.item = textBox7->Text;
    ob1.quantity = textBox8->Text;
    crud.update(r + "Order.txt", ob1.customer, 0, ob1.customer + "," + ob1.item + "," + ob1.quantity);

    dataGridView2->Columns->Clear();
    dataGridView2->Rows->Clear();

    cli::array<order^>^ o;
    o = mapper::map_order(crud.read(r + "Order.txt"));

    dataGridView2->Columns->Add("c1", "Customer");
    dataGridView2->Columns->Add("c2", "Item");
    dataGridView2->Columns->Add("c3", "Quantity");

    for (int i = 0; i < o->Length; i++) {
        dataGridView2->Rows->Add(o[i]->customer, o[i]->item, o[i]->quantity);
    }
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    order ob1;
    ob1.customer = textBox6->Text;
    ob1.item = textBox7->Text;
    ob1.quantity = textBox8->Text;

    dataGridView2->Columns->Clear();
    dataGridView2->Rows->Clear();

    cli::array<order^>^ o;
    if (ob1.customer == "*") {
        o = mapper::map_order(crud.read(r + "Order.txt"));
    }
    else {
        o = mapper::map_order(crud.search(r + "Order.txt", ob1.customer, 0));
    }

    dataGridView2->Columns->Add("c1", "Customer");
    dataGridView2->Columns->Add("c2", "Item");
    dataGridView2->Columns->Add("c3", "Quantity");

    for (int i = 0; i < o->Length; i++) {
        dataGridView2->Rows->Add(o[i]->customer, o[i]->item, o[i]->quantity);
    }
}
       private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
           tabControl1->SelectedIndex = 6;
       }
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    table ob1;
    ob1.customer = textBox13->Text;
    ob1.seats = textBox17->Text;
    ob1.table_no = textBox18->Text;
    crud.insert(r + "Table.txt", ob1.customer + "," + ob1.table_no + "," + ob1.seats);

    dataGridView5->Columns->Clear();
    dataGridView5->Rows->Clear();

    cli::array<table^>^ t;
    t = mapper::map_table(crud.read(r + "Table.txt"));

    dataGridView5->Columns->Add("c1", "Customer");
    dataGridView5->Columns->Add("c2", "Seats");
    dataGridView5->Columns->Add("c3", "Table No");

    for (int i = 0; i < t->Length; i++) {
        dataGridView5->Rows->Add(t[i]->customer, t[i]->table_no, t[i]->seats);
    }

}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    table ob1;
    ob1.customer = textBox13->Text;
    ob1.seats = textBox17->Text;
    ob1.table_no = textBox18->Text;
    crud.discard(r + "Table.txt", ob1.customer, 0);

    dataGridView5->Columns->Clear();
    dataGridView5->Rows->Clear();

    cli::array<table^>^ t;
    t = mapper::map_table(crud.read(r + "Table.txt"));

    dataGridView5->Columns->Add("c1", "Customer");
    dataGridView5->Columns->Add("c2", "Seats");
    dataGridView5->Columns->Add("c3", "Table No");

    for (int i = 0; i < t->Length; i++) {
        dataGridView5->Rows->Add(t[i]->customer, t[i]->table_no, t[i]->seats);
    }
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    table ob1;
    ob1.customer = textBox13->Text;
    ob1.seats = textBox17->Text;
    ob1.table_no = textBox18->Text;
    crud.update(r + "Table.txt", ob1.customer, 0, ob1.customer + "," + ob1.table_no + "," + ob1.seats);

    dataGridView5->Columns->Clear();
    dataGridView5->Rows->Clear();

    cli::array<table^>^ t;
    t = mapper::map_table(crud.read(r + "Table.txt"));

    dataGridView5->Columns->Add("c1", "Customer");
    dataGridView5->Columns->Add("c2", "Seats");
    dataGridView5->Columns->Add("c3", "Table No");

    for (int i = 0; i < t->Length; i++) {
        dataGridView5->Rows->Add(t[i]->customer, t[i]->table_no, t[i]->seats);
    }
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    table ob1;
    ob1.customer = textBox13->Text;
    ob1.table_no = textBox17->Text;
    ob1.seats = textBox18->Text;

    dataGridView5->Columns->Clear();
    dataGridView5->Rows->Clear();

    cli::array<table^>^ t;
    if (ob1.customer == "*") {
        t = mapper::map_table(crud.read(r + "Table.txt"));
    }
    else {
        t = mapper::map_table(crud.search(r + "Table.txt", ob1.customer, 0));
    }

    dataGridView5->Columns->Add("c1", "Customer");
    dataGridView5->Columns->Add("c2", "Table No");
    dataGridView5->Columns->Add("c3", "Seats");

    for (int i = 0; i < t->Length; i++) {
        dataGridView5->Rows->Add(t[i]->customer, t[i]->table_no, t[i]->seats);
    }
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 4;
}

private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    employee ob1;
    ob1.name = textBox11->Text;
    ob1.position = textBox10->Text;
    ob1.salary = textBox9->Text;
    ob1.bonus = textBox12->Text;
    String^ salarytype;
    if (ob1.bonus == "")
    {
        salarytype = ob1.setsalary(textBox9->Text);
    }
    else {
        salarytype = ob1.setsalary(textBox9->Text, textBox12->Text);
    }
    crud.insert(r + "Emp.txt", ob1.name + "," + ob1.position + "," + salarytype);

    dataGridView3->Columns->Clear();
    dataGridView3->Rows->Clear();


    cli::array<employee^>^ d;
    d = mapper::map_emp(crud.read(r + "Emp.txt"));

    dataGridView3->Columns->Add("c1", "Employee");
    dataGridView3->Columns->Add("c2", "Position");
    dataGridView3->Columns->Add("c3", "Salary");

    for (int i = 0; i < d->Length; i++) {
        dataGridView3->Rows->Add(d[i]->name, d[i]->position, d[i]->salary);
    }
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    employee ob1;
    ob1.name = textBox11->Text;
    ob1.position = textBox10->Text;
    ob1.salary = textBox9->Text;
    ob1.bonus = textBox12->Text;
    String^ salarytype;
    if (ob1.bonus == "") {
        salarytype = ob1.setsalary(textBox9->Text);
    }
    else {
        salarytype = ob1.setsalary(textBox9->Text, textBox12->Text);
    }

    crud.discard(r + "Emp.txt", ob1.name, 0);

    dataGridView3->Columns->Clear();
    dataGridView3->Rows->Clear();


    cli::array<employee^>^ d;
    d = mapper::map_emp(crud.read(r + "Emp.txt"));

    dataGridView3->Columns->Add("c1", "Employee");
    dataGridView3->Columns->Add("c2", "Position");
    dataGridView3->Columns->Add("c3", "Salary");

    for (int i = 0; i < d->Length; i++) {
        dataGridView3->Rows->Add(d[i]->name, d[i]->position, d[i]->salary);
    }
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    employee ob1;
    ob1.name = textBox11->Text;
    ob1.position = textBox10->Text;
    ob1.salary = textBox9->Text;
    ob1.bonus = textBox12->Text;

    String^ salarytype;
    if (ob1.bonus == "") {
        salarytype = ob1.setsalary(textBox9->Text);
    }
    else {
        salarytype = ob1.setsalary(textBox9->Text, textBox12->Text);
    }
    crud.update(r + "Emp.txt", ob1.name, 0, ob1.name + "," + ob1.position + "," + salarytype);

    dataGridView3->Columns->Clear();
    dataGridView3->Rows->Clear();


    cli::array<employee^>^ d;
    d = mapper::map_emp(crud.read(r + "Emp.txt"));

    dataGridView3->Columns->Add("c1", "Employee");
    dataGridView3->Columns->Add("c2", "Position");
    dataGridView3->Columns->Add("c3", "Salary");

    for (int i = 0; i < d->Length; i++) {
        dataGridView3->Rows->Add(d[i]->name, d[i]->position, d[i]->salary);
    }

}

private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    employee ob1;
    ob1.name = textBox11->Text;
    ob1.position = textBox10->Text;
    ob1.salary = textBox9->Text;
    ob1.bonus = textBox12->Text;
   
    dataGridView3->Columns->Clear();
    dataGridView3->Rows->Clear();

    cli::array<employee^>^ b;
    if (ob1.name == "*") {
        b = mapper::map_emp(crud.read(r + "Emp.txt"));
    }
    else {
        b = mapper::map_emp(crud.search(r + "Emp.txt", ob1.name, 0));
    }

    dataGridView3->Columns->Add("c1", "Ordered Item");
    dataGridView3->Columns->Add("c2", "Price");
    dataGridView3->Columns->Add("c3", "Bill");

    for (int i = 0; i < b->Length; i++) {
        dataGridView3->Rows->Add(b[i]->name, b[i]->position, b[i]->salary);
    }
}

private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 1;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 1;
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 1;
}

private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    discountedbill ob1;
    ob1.item = textBox16->Text;
    ob1.price = textBox15->Text;
    String^ billtype = ob1.generatebill(textBox15->Text);
    crud.insert(r + "Bill.txt", ob1.item + "," + ob1.price + "," + billtype);

    dataGridView4->Columns->Clear();
    dataGridView4->Rows->Clear();


    cli::array<discountedbill^>^ b;
    b = mapper::map_bill(crud.read(r + "Bill.txt"));

    dataGridView4->Columns->Add("c1", "Ordered Item");
    dataGridView4->Columns->Add("c2", "Price");
    dataGridView4->Columns->Add("c3", "Bill");

    for (int i = 0; i < b->Length; i++) {
        dataGridView4->Rows->Add(b[i]->item, b[i]->price, b[i]->bill_amount);
    }
}

private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    discountedbill ob1;
    ob1.item = textBox16->Text;
    crud.discard(r + "Bill.txt", ob1.item, 0);

    dataGridView4->Columns->Clear();
    dataGridView4->Rows->Clear();


    cli::array<discountedbill^>^ b;
    b = mapper::map_bill(crud.read(r + "Bill.txt"));

    dataGridView4->Columns->Add("c1", "Ordered Item");
    dataGridView4->Columns->Add("c2", "Price");
    dataGridView4->Columns->Add("c3", "Bill");

    for (int i = 0; i < b->Length; i++) {
        dataGridView4->Rows->Add(b[i]->item, b[i]->price, b[i]->bill_amount);
    }
}

private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    discountedbill ob1;
    ob1.item = textBox16->Text;
    ob1.price = textBox15->Text;
    String^ billtype = ob1.generatebill(textBox15->Text);
    crud.update(r + "Bill.txt", ob1.item, 0, ob1.item + "," + ob1.price + "," + billtype);

    dataGridView4->Columns->Clear();
    dataGridView4->Rows->Clear();

    cli::array<discountedbill^>^ b;
    b = mapper::map_bill(crud.read(r + "Bill.txt"));

    dataGridView4->Columns->Add("c1", "Ordered Item");
    dataGridView4->Columns->Add("c2", "Price");
    dataGridView4->Columns->Add("c3", "Bill");

    for (int i = 0; i < b->Length; i++) {
        dataGridView4->Rows->Add(b[i]->item, b[i]->price, b[i]->bill_amount);
    }
}

private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ r = "C:\\Users\\gg\\OneDrive\\Desktop\\";
    DatabaseOperations crud;

    discountedbill ob1;
    ob1.item = textBox16->Text;
    ob1.price = textBox15->Text;
    String^ billtype = ob1.generatebill(textBox15->Text);

    dataGridView4->Columns->Clear();
    dataGridView4->Rows->Clear();

    cli::array<discountedbill^>^ b;
    if (ob1.item == "*") {
        b = mapper::map_bill(crud.read(r + "Bill.txt"));
    }
    else {
        b = mapper::map_bill(crud.search(r + "Bill.txt", ob1.item, 0));
    }

    dataGridView4->Columns->Add("c1", "Ordered Item");
    dataGridView4->Columns->Add("c2", "Price");
    dataGridView4->Columns->Add("c3", "Bill");

    for (int i = 0; i < b->Length; i++) {
        dataGridView4->Rows->Add(b[i]->item, b[i]->price, b[i]->bill_amount);
    }
}

private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 1;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedIndex = 5;
}

}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

