﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication2
{
    public partial class Form1 : Form
    {
       public int a=0, b=0, c=0;
        public Form1()
        {
            InitializeComponent();
            
            a = Convert.ToInt32(textBox1.Text);
            b = Convert.ToInt32(textBox2.Text);
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

            a = Convert.ToInt32(textBox1.Text);
            b = Convert.ToInt32(textBox2.Text);
            if (textBox3.Text == "+")
            {
                c = a + b;
            }
            else if (textBox3.Text == "-")
            {
                c = a - b;
            }
            else if (textBox3.Text == "*")
            {
                c = a * b;
            }
            else if (textBox3.Text == "/")
            {
                c = a / b;
            }
            textBox4.Text = c.ToString() ;
        }

    }
}
