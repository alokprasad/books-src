#include <stdio.h>
#include <infiniband/verbs.h>
#include <infiniband/arch.h>

int main(int argc, char *argv[])
{
	struct ibv_device **dev_list;
	int num_devices, i;

/******************************************************************************
* Function: ibv_get_device

******************************************************************************/
	printf("    %-16s\t   node GUID\n", "device");
	printf("    %-16s\t----------------\n", "------");
/******************************************************************************
* Function: ibv_get_device_name

/******************************************************************************
* Function: ibv_get_device_guid

******************************************************************************/

/******************************************************************************
* Function: ibv_free_device_list

******************************************************************************/
	return 0;
}
