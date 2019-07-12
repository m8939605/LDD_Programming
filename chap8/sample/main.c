/*
 * main.c
 *
 */
#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

void sub(void)
{

}

static int sample_init(void)
{
	printk("sample driver installed.\n");

	printk("%d\n", sizeof(struct thread_info));

	sub();

	return 0;
}

static void sample_exit(void)
{
	printk("sample driver removed.\n");
}

module_init(sample_init);
module_exit(sample_exit);

