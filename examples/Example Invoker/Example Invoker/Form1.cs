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


        [DllImport("MyLDC.dll", EntryPoint = "_ZN5MyLDC8CreateDbEv")]
        static extern void CreateDatabase(string databaseName);

        [DllImport("MyLDC.dll", EntryPoint = "_ZN5MyLDC11CreateTableESsSs")]
        static extern void CreateTable(string databaseName, string tablename, string primaryKey);

        private void button1_Click(object sender, EventArgs e)
        {
            string dbname = "TestData";

            CreateDatabase(dbname);
            CreateTable(dbname, "testTable", "testKey");
            
        }
    }
}
