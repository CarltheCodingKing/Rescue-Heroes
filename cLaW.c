#pragma config(Sensor, S2,     Echo,           sensorEV3_Ultrasonic)
#pragma config(Motor,  motorC,          Grabber,       tmotorEV3_Medium, PIDControl, reversed, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	if(SensorValue(Echo)< 10)
	{
	while(getMotorEncoder(Grabber) > -2980)
	{
		motor[Grabber] = 50;

}


}

}
