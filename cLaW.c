
task main()
{
while(true)
{
	motor[motorC]=100;
	wait1Msec(1000);
	motor[motorC]= -100;
	wait1Msec(1000);
}


}
