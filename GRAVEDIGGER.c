void monstrtruk()
{				motor[motorA] = 100;
				motor[motorB]= 100;
				wait10Msec(10000000);
			}
task main()
{
	while(true)
		monstrtruk();

}
