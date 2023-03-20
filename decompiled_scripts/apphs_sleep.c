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
	int iLocal_17 = 0;
	int iLocal_18[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	int iLocal_44 = 0;
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
	iLocal_17 = -1;
	fLocal_40 = 0.82f;
	fLocal_41 = 0.42f;
	fLocal_42 = 0f;
	fLocal_43 = 0f;
	unk_0xE3074BC832716971();
	func_28();
	iLocal_39 = 1;
	func_27();
	func_26();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14443.f_1 != 9)
		{
			switch (Global_14443.f_1)
			{
				case 7:
					func_21();
					if (iLocal_39)
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
					if (func_11(2, Global_14411, 0))
					{
						func_10();
						Global_14421 = 1;
						func_9(Global_14424, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_14443.f_1 > 3)
						{
							Global_14443.f_1 = 7;
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
			Global_14445 = 6;
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
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 3) || Global_14443.f_1 == 0) || Global_14387 == 1)
	{
		Global_14430 = 1;
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
	unk_0x01DFCA3621B68C4A();
}

void func_3()
{
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x4EA098C870B73AB7(&Global_2313, 25);
	unk_0xB8A73E7DA87B2968(&Global_2314, 11);
}

int func_4(int iParam0)
{
	if (Global_35777 == 15)
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
	return func_6(iParam0, Global_35777);
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
	Global_3118[Global_14443 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_2919 == 1 || Global_14443.f_1 < 7)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_10()
{
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		unk_0xA93E75A5493862BD(-1, "Menu_Back", &Global_14432, 1);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x3CEEA45E4779F6BD(iParam0, iParam1) || (iParam2 == 1 && unk_0x55EB9D945CFDA4D8(iParam0, iParam1)))
	{
		if (unk_0x2D337DD29A7ABD30())
		{
			if (unk_0x9CCF717E34C78F05() == 0 || (unk_0x976A3E0B7A766593() && unk_0xDC1EFAABB6EF8F7F(2)))
			{
				return 0;
			}
		}
		if (unk_0x6AAF285DC78E0304() || unk_0xF35D072F1A7DC0A4())
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
	if (Global_14421 == 0)
	{
		if (func_11(2, Global_14412, 0))
		{
			func_15();
			Global_14421 = 1;
			func_28();
			unk_0x3B6EF6403E3F1CAC(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_36 = unk_0x747CF7F7964A7A98();
			while (!unk_0x5BB8F128D41C9D26(uLocal_36))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_259 = iLocal_18[unk_0x208C8B7F9E2B7F30(uLocal_36)];
			func_13(Global_14424, "SET_HEADER", &(Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_7[Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
			{
				func_9(Global_14424, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				func_9(Global_14424, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xC55B9553B3EDADE9(iParam3))
	{
		func_14(iParam3);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam4))
	{
		func_14(iParam4);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam5))
	{
		func_14(iParam5);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam6))
	{
		func_14(iParam6);
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_14(var uParam0)
{
	unk_0x0BBDB952BE56A9DF(uParam0);
	unk_0xCB329F559FA7DCD0();
}

void func_15()
{
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		unk_0xA93E75A5493862BD(-1, "Menu_Accept", &Global_14432, 1);
		func_16();
	}
}

void func_16()
{
	if (func_17())
	{
		unk_0xA6445F7E6BDEA467(5);
	}
}

int func_17()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x94D84BEA18624393();
	iVar1 = unk_0x730196602471217D(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2595472 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	Global_14421 = 1;
	iLocal_38 = 0;
	iLocal_39 = 0;
	func_19();
}

void func_19()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	func_9(Global_14424, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	iLocal_34 = 0;
	iVar16 = 0;
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_84[iVar18] = 5000;
		while (iVar17 < 9)
		{
			if (Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_124[iVar17] == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_84[iVar17] < Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_84[iVar18])
					{
						iVar18 = iVar17;
						func_20(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar16), unk_0xBBDA792448DB5A89(Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_104[iVar18]), -1f, -1f, &(Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_7[iVar18 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar17++;
		}
		iLocal_18[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_124[iVar16] == 1)
		{
			iLocal_34++;
		}
		iVar16++;
	}
	func_9(Global_14424, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14424, "SET_HEADER", &(Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_7[Global_3118[Global_14443 /*2811*/][iLocal_38 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14431)
	{
		func_20(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x4EA098C870B73AB7(&Global_2313, 17);
}

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xC55B9553B3EDADE9(sParam7))
	{
		func_14(sParam7);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam8))
	{
		func_14(iParam8);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam9))
	{
		func_14(iParam9);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam10))
	{
		func_14(iParam10);
	}
	if (!unk_0xC55B9553B3EDADE9(iParam11))
	{
		func_14(iParam11);
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_21()
{
	if (iLocal_44)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_44 = 0;
		}
	}
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_35 > 0)
			{
				iLocal_35 = (iLocal_35 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_35++;
			if (iLocal_35 == iLocal_34)
			{
				iLocal_35 = 0;
			}
			func_22();
		}
	}
	if (iLocal_44 == 0)
	{
		if (func_11(2, Global_14419, 0))
		{
			if (iLocal_35 > 0)
			{
				iLocal_35 = (iLocal_35 - 1);
			}
			func_24();
			iLocal_44 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_11(2, Global_14420, 0))
		{
			iLocal_35++;
			if (iLocal_35 == iLocal_34)
			{
				iLocal_35 = 0;
			}
			func_22();
			iLocal_44 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_22()
{
	func_9(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xA93E75A5493862BD(-1, "Menu_Navigate", &Global_14432, 1);
	func_23();
}

void func_23()
{
	if (func_17())
	{
		if (Global_14609 == 0)
		{
			unk_0xA6445F7E6BDEA467(2);
		}
		else
		{
			unk_0xA6445F7E6BDEA467(1);
		}
	}
}

void func_24()
{
	func_9(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xA93E75A5493862BD(-1, "Menu_Navigate", &Global_14432, 1);
	func_25();
}

void func_25()
{
	if (func_17())
	{
		if (Global_14609 == 0)
		{
			unk_0xA6445F7E6BDEA467(1);
		}
		else
		{
			unk_0xA6445F7E6BDEA467(2);
		}
	}
}

void func_26()
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	iLocal_34 = 0;
	iVar16 = 0;
	func_28();
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_3118[Global_14443 /*2811*/][iVar18 /*281*/] = 5000;
		while (iVar17 < 9)
		{
			if (Global_3118[Global_14443 /*2811*/][iVar17 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (iVar17 == 0)
					{
						if (Global_3118[Global_14443 /*2811*/][iVar17 /*281*/] < Global_3118[Global_14443 /*2811*/][iVar18 /*281*/])
						{
							iVar18 = iVar17;
							func_20(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(2), unk_0xBBDA792448DB5A89(iVar16), -1f, -1f, -1f, &(Global_3118[Global_14443 /*2811*/][iVar18 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar17++;
		}
		iLocal_18[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_3118[Global_14443 /*2811*/][iVar16 /*281*/].f_280 == 1)
		{
			iLocal_34++;
		}
		iVar16++;
	}
	func_9(Global_14424, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14424, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14431)
	{
		func_20(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x4EA098C870B73AB7(&Global_2313, 17);
}

void func_27()
{
	if (Global_35777 != 15)
	{
		func_28();
		Global_3118[Global_14443 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

void func_28()
{
	if (func_34(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_29();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_29()
{
	func_30();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_30()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_33(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_32(unk_0xD5A676B97920D126());
			if (func_31(iVar0) && (!func_34(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_31(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(uParam0);
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
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_34(int iParam0)
{
	return Global_35777 == iParam0;
}

