# RenderCore_ParaVer
RenderCore_ParaVer using MPI


	1、进入根目录
	2、进入build文件夹
	3、命令行依次执行①cmake ..  ②make .  ③mpirun -np 4(你想跑的核心数量) ./renderingCore 
	4、查看Pic文件夹下的生成ppm文件


	注意：这个版本目前只能在Linux环境下运行
	  
注意：目前的版本在核心任务块划分部分出现了一些问题，需要手动修改代码才能获得想要的效果，具体在Image_tile_partition_Init()函数
	  
