#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	if (unk_0xC968670BFACE42D9(82))
	{
		func_30();
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("controller_races")) > 1)
	{
		unk_0x1090044AD1DA76FA();
	}
	while (unk_0x2C83A9DA6BFFC4F9(joaat("initial")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_29();
	while (true)
	{
		if (func_26(9) || Global_87109)
		{
			func_30();
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (func_24())
			{
				func_22();
				func_18();
				if (func_12() == 1)
				{
					switch (iLocal_27)
					{
						case 1:
							break;
						
						case 2:
							func_1();
							break;
						}
					}
				}
		}
		unk_0x4EDE34FBADD967A6(1000);
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(8))
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			iVar1 = func_10(iVar0);
			if (unk_0xA921AA820C25702F(Global_97173.f_28101.f_1, iVar0))
			{
				if (unk_0xA921AA820C25702F(Global_97173.f_28101.f_3, iVar0))
				{
					fVar2 = unk_0xB7A628320EFF8E47(func_9(unk_0x4F8644AF03D0E0D6()), func_8(iVar1, 0));
					if (fVar2 > 43681f)
					{
						if (!func_7(iVar1))
						{
							if (!Global_97147[iVar0])
							{
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								unk_0xE80492A9AC099A93(&(Global_97173.f_28101.f_3), iVar0);
							}
							else if ((unk_0x9CD27B0045628463() - Global_97153[iVar0]) > 60000)
							{
								Global_97147[iVar0] = 0;
								Global_97153[iVar0] = unk_0x9CD27B0045628463();
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								unk_0xE80492A9AC099A93(&(Global_97173.f_28101.f_3), iVar0);
							}
						}
						else
						{
							unk_0xE80492A9AC099A93(&(Global_97173.f_28101.f_3), iVar0);
						}
					}
					else if (func_7(iVar1))
					{
						func_2(iVar1, 0, 1);
					}
				}
				else if (!func_7(iVar1))
				{
					if (!Global_97147[iVar0])
					{
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
					else if ((unk_0x9CD27B0045628463() - Global_97153[iVar0]) > 60000)
					{
						Global_97147[iVar0] = 0;
						Global_97153[iVar0] = unk_0x9CD27B0045628463();
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 262)
	{
		return;
	}
	iVar0 = iParam0;
	if (!bParam2)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 0))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
		if (Global_24742 == 1)
		{
			Global_24743 = 1;
		}
		Global_24742 = 1;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 0);
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 15);
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 0);
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA6DB27D19ECBB7DA(Global_24745[iVar0 /*23*/].f_19))
		{
			unk_0xB98236CAAECEF897(true);
			unk_0x86A652570E5F25DD(&(Global_24745[iVar0 /*23*/].f_19));
			unk_0xB98236CAAECEF897(false);
		}
	}
}

void func_3(int iParam0)
{
	func_6(iParam0, 0, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

void func_4(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (bParam1 == unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 4);
	}
	if (Global_24742 == 1)
	{
		Global_24743 = 1;
	}
	Global_24742 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
}

void func_5(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (bParam1 == unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 5);
	}
	if (Global_24742 == 1)
	{
		Global_24743 = 1;
	}
	Global_24742 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
}

void func_6(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (bParam1 == unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 11);
	}
	if (Global_24742 == 1)
	{
		Global_24743 = 1;
	}
	Global_24742 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
}

int func_7(int iParam0)
{
	if (iParam0 != 262)
	{
		return unk_0xA6DB27D19ECBB7DA(Global_24745[iParam0 /*23*/].f_19);
	}
	return 0;
}

Vector3 func_8(int iParam0, int iParam1)
{
	if (iParam0 != 262)
	{
		return Global_24745[iParam0 /*23*/][iParam1 /*3*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_9(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 85;
			break;
		
		case 1:
			return 86;
			break;
		
		case 2:
			return 87;
			break;
		
		case 3:
			return 88;
			break;
		
		case 4:
			return 89;
			break;
	}
	return 85;
}

bool func_11(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[0], iParam0);
}

int func_12()
{
	func_13();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_17(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_16(unk_0xD80958FC74E988A6());
			if (func_15(iVar0) && (!func_14(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_15(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_14(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_18()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(7))
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			iVar1 = func_21(iVar0);
			if (unk_0xA921AA820C25702F(Global_97173.f_28098.f_2, iVar0))
			{
				fVar2 = unk_0xB7A628320EFF8E47(func_9(unk_0x4F8644AF03D0E0D6()), func_8(iVar1, 0));
				if (fVar2 > 43681f)
				{
					if (!func_7(iVar1))
					{
						if (!Global_97137[iVar0])
						{
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							unk_0xE80492A9AC099A93(&(Global_97173.f_28098.f_2), iVar0);
						}
						else if ((unk_0x9CD27B0045628463() - Global_97142[iVar0]) > 60000)
						{
							Global_97137[iVar0] = 0;
							Global_97142[iVar0] = unk_0x9CD27B0045628463();
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							unk_0xE80492A9AC099A93(&(Global_97173.f_28098.f_2), iVar0);
						}
					}
				}
				else if (func_7(iVar1))
				{
					func_2(iVar1, 0, 1);
				}
			}
			else if (!func_7(iVar1))
			{
				if (!Global_97137[iVar0])
				{
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
				else if ((unk_0x9CD27B0045628463() - Global_97142[iVar0]) > 60000)
				{
					Global_97137[iVar0] = 0;
					Global_97142[iVar0] = unk_0x9CD27B0045628463();
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
			}
			else if (!Global_97173.f_28098)
			{
				if (iVar1 == 81)
				{
					func_20(81);
					func_19(65, 1000);
					Global_97173.f_28098 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_19(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_97173.f_6839[iParam0] = 1;
	Global_97173.f_6839.f_236[iParam0] = (unk_0x9CD27B0045628463() + iParam1);
}

void func_20(int iParam0)
{
	func_6(iParam0, 1, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 81;
			break;
		
		case 1:
			return 82;
			break;
		
		case 2:
			return 83;
			break;
		
		case 3:
			return 84;
			break;
	}
	return 81;
}

void func_22()
{
	switch (iLocal_27)
	{
		case 0:
			if (unk_0x25223CA6B4D20B7F() < 20 && unk_0x25223CA6B4D20B7F() >= 5)
			{
				func_23();
				iLocal_27 = 1;
			}
			else
			{
				iLocal_27 = 2;
			}
			break;
		
		case 1:
			if (unk_0x25223CA6B4D20B7F() >= 20 || unk_0x25223CA6B4D20B7F() < 5)
			{
				iLocal_27 = 2;
			}
			break;
		
		case 2:
			if (unk_0x25223CA6B4D20B7F() < 20 && unk_0x25223CA6B4D20B7F() >= 5)
			{
				func_23();
				iLocal_27 = 1;
			}
			break;
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		func_2(func_10(iVar0), 0, 0);
		iVar0++;
	}
}

int func_24()
{
	if (func_26(9))
	{
		return 0;
	}
	if (func_25())
	{
		return 0;
	}
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0)
	{
		return 0;
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		return 0;
	}
	return 1;
}

int func_25()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_27(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_27(int iParam0)
{
	return func_28(iParam0, Global_34909);
}

int func_28(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		Global_97137[iVar0] = 0;
		Global_97142[iVar0] = unk_0x9CD27B0045628463();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_97147[iVar0] = 0;
		iVar0++;
	}
}

void func_30()
{
	unk_0x1090044AD1DA76FA();
}

