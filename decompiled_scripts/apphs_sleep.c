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
	int iLocal_17[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	int iLocal_43 = 0;
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
	fLocal_39 = 0.82f;
	fLocal_40 = 0.42f;
	fLocal_41 = 0f;
	fLocal_42 = 0f;
	unk_0x9243BAC96D64C050();
	func_28();
	iLocal_38 = 1;
	func_27();
	func_26();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					func_21();
					if (iLocal_38)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 8:
					func_21();
					func_12();
					if (func_11(2, Global_14361, 0))
					{
						func_10();
						Global_14371 = 1;
						func_9(Global_14374, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_14393.f_1 > 3)
						{
							Global_14393.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_14395 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	unk_0x1090044AD1DA76FA();
}

void func_3()
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xE80492A9AC099A93(&Global_2263, 25);
	unk_0x933D6A9EEC1BACD0(&Global_2264, 11);
}

int func_4(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_34909);
}

int func_6(int iParam0, int iParam1)
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

void func_7()
{
	func_28();
	Global_3068[Global_14393 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xC6796A8FFA375E53();
}

void func_10()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Back", &Global_14382, true);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x580417101DDB492F(iParam0, iParam1) || (iParam2 == 1 && unk_0x91AEF906BCA88877(iParam0, iParam1)))
	{
		if (unk_0x48AF36444B965238())
		{
			if (unk_0x0CF2B696BBF945AE() == 0 || (unk_0x5FCF4D7069B09026() && unk_0xA571D46727E2B718(2)))
			{
				return 0;
			}
		}
		if (unk_0xB0034A223497FFCB() || unk_0xE18B138FABC53103())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_12()
{
	if (Global_14371 == 0)
	{
		if (func_11(2, Global_14362, 0))
		{
			func_15();
			Global_14371 = 1;
			func_28();
			unk_0xF6E48914C7A8694E(Global_14374, "GET_CURRENT_SELECTION");
			iLocal_35 = unk_0xC50AA39A577AF886();
			while (!unk_0x768FF8961BA904D6(iLocal_35))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_259 = iLocal_17[unk_0x2DE7EFA66B906036(iLocal_35)];
			func_13(Global_14374, "SET_HEADER", &(Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
			{
				func_9(Global_14374, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				func_9(Global_14374, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xCA042B6957743895(sParam3))
	{
		func_14(sParam3);
	}
	if (!unk_0xCA042B6957743895(sParam4))
	{
		func_14(sParam4);
	}
	if (!unk_0xCA042B6957743895(sParam5))
	{
		func_14(sParam5);
	}
	if (!unk_0xCA042B6957743895(sParam6))
	{
		func_14(sParam6);
	}
	unk_0xC6796A8FFA375E53();
}

void func_14(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_15()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Accept", &Global_14382, true);
		func_16();
	}
}

void func_16()
{
	if (func_17())
	{
		unk_0x95C9E72F3D7DEC9B(5);
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2543736 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	Global_14371 = 1;
	iLocal_37 = 0;
	iLocal_38 = 0;
	func_19();
}

void func_19()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	func_9(Global_14374, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	iLocal_33 = 0;
	iVar16 = 0;
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_84[iVar18] = 5000;
		while (iVar17 < 9)
		{
			if (Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_124[iVar17] == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_84[iVar17] < Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_84[iVar18])
					{
						iVar18 = iVar17;
						func_20(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar16), unk_0xBBDA792448DB5A89(Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_104[iVar18]), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_7[iVar18 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar17++;
		}
		iLocal_17[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_124[iVar16] == 1)
		{
			iLocal_33++;
		}
		iVar16++;
	}
	func_9(Global_14374, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14374, "SET_HEADER", &(Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14381)
	{
		func_20(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_2263, 17);
}

void func_20(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xCA042B6957743895(sParam7))
	{
		func_14(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_14(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_14(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_14(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_14(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_21()
{
	if (iLocal_43)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_43 = 0;
		}
	}
	if (unk_0xA571D46727E2B718(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_33)
			{
				iLocal_34 = 0;
			}
			func_22();
		}
	}
	if (iLocal_43 == 0)
	{
		if (func_11(2, Global_14369, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
			}
			func_24();
			iLocal_43 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_11(2, Global_14370, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_33)
			{
				iLocal_34 = 0;
			}
			func_22();
			iLocal_43 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_22()
{
	func_9(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
	func_23();
}

void func_23()
{
	if (func_17())
	{
		if (Global_14556 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(2);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(1);
		}
	}
}

void func_24()
{
	func_9(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
	func_25();
}

void func_25()
{
	if (func_17())
	{
		if (Global_14556 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(1);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(2);
		}
	}
}

void func_26()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	iLocal_33 = 0;
	iVar16 = 0;
	func_28();
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_3068[Global_14393 /*2811*/][iVar18 /*281*/] = 5000;
		while (iVar17 < 9)
		{
			if (Global_3068[Global_14393 /*2811*/][iVar17 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (iVar17 == 0)
					{
						if (Global_3068[Global_14393 /*2811*/][iVar17 /*281*/] < Global_3068[Global_14393 /*2811*/][iVar18 /*281*/])
						{
							iVar18 = iVar17;
							func_20(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar16), -1f, -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar18 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar17++;
		}
		iLocal_17[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_3068[Global_14393 /*2811*/][iVar16 /*281*/].f_280 == 1)
		{
			iLocal_33++;
		}
		iVar16++;
	}
	func_9(Global_14374, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14374, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14381)
	{
		func_20(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_2263, 17);
}

void func_27()
{
	if (Global_34909 != 15)
	{
		func_28();
		Global_3068[Global_14393 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

void func_28()
{
	if (func_34(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_29();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_29()
{
	func_30();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_30()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_33(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_32(unk_0xD80958FC74E988A6());
			if (func_31(iVar0) && (!func_34(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_31(Global_97173.f_1729.f_539.f_3213))
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

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_34(int iParam0)
{
	return Global_34909 == iParam0;
}

