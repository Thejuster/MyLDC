using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Example_Invoker
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }


        [DllImport("MyLDC.dll", EntryPoint = "SomeFunction", CallingConvention = CallingConvention.Cdecl)]
        static extern void Query(string LPCSTR);

        private void button1_Click(object sender, EventArgs e)
        {
            Query("create table");
            
            
        }
    }
}
