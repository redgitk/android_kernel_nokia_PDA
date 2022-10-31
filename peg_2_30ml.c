#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Peter Jay Salzman");


static u8             mybyte = 'A';
static unsigned short myshort = 1;
static int            myint = 20;
static long           mylong = 9999;
static char           *mystring = "blah";
static int            myintArray[2] = { 0, 420 };

MODULE_PARM(mybyte, "b");
MODULE_PARM(myshort, "h");
MODULE_PARM(myint, "i");
MODULE_PARM(mylong, "l");
MODULE_PARM(mystring, "s");
MODULE_PARM(myintArray, "1-2i");

MODULE_PARM_DESC(mybyte, "This byte really does nothing at all.");
MODULE_PARM_DESC(myshort, "This short is *extremely* important.");

static int __init hello_5_init(void)
{
   printk(KERN_ALERT "mybyte is an 8 bit integer: %i\n", mybyte);
   printk(KERN_ALERT "myshort is a short integer: %hi\n", myshort);
   printk(KERN_ALERT "myint is an integer: %i\n", myint);
   printk(KERN_ALERT "mylong is a long integer: %li\n", mylong);
   printk(KERN_ALERT "mystring is a string: %s\n", mystring);
   printk(KERN_ALERT "myintArray is %i and %i\n", myintArray[0], myintArray[1]);
   return 0;
}


static void __exit hello_5_exit(void)
{
   printk(KERN_ALERT "Goodbye, world 5\n");
}


module_init(hello_5_init);
module_exit(hello_5_exit);
