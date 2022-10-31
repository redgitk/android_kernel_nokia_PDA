#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/sched.h>    
#include <linux/tty.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Peter Jay Salzman");


void print_string(char *str)
{
   struct tty_struct *my_tty;
   my_tty = current->tty;           

   if (my_tty != NULL) { 

      (*(my_tty->driver).write)(
         my_tty,                 
         0,                      
         str,                    
         strlen(str));           


      (*(my_tty->driver).write)(my_tty, 0, "\015\012", 2);
   }
}


int print_string_init(void)
{
   print_string("The module has been inserted.  Hello world!");
   return 0;
}


void print_string_exit(void)
{
   print_string("The module has been removed.  Farewell world!");
}  


module_init(print_string_init);
module_exit(print_string_exit);
