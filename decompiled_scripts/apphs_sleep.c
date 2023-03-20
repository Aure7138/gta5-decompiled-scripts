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
	var uLocal_35 = 0;
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
	unk_0x44E747EFAA4C6724();
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
	unk_0x883793591E631A3B();
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
	unk_0xCD27BF29FB9012E2(&Global_2263, 25);
	unk_0x3DBE2A7AF9E71C82(&Global_2264, 11);
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

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xA52FC2467E672B55();
}

void func_10()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x84795EA8F54230A1(-1, "Menu_Back", &Global_14382, 1);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x58FC9C7DF8FE009B(iParam0, iParam1) || (iParam2 == 1 && unk_0x02AC213158CF29AE(iParam0, iParam1)))
	{
		if (unk_0x80AD636AD4184F2B())
		{
			if (unk_0x807035052B6EC8A1() == 0 || (unk_0x1B3FC52C6D531434() && unk_0x30E5EC01C9ACF9BC(2)))
			{
				return 0;
			}
		}
		if (unk_0xBB02FD0C8166DE6D() || unk_0xDAF2549B28FDF97C())
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
			unk_0xF48C88BD1F0007E8(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_35 = unk_0x0D72C1C0D4A044A4();
			while (!unk_0xEB72DB563C7B7566(uLocal_35))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_259 = iLocal_17[unk_0x88AE9F0292C2B117(uLocal_35)];
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

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0x8FA72E132AAFA62F(iParam3))
	{
		func_14(iParam3);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam4))
	{
		func_14(iParam4);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam5))
	{
		func_14(iParam5);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam6))
	{
		func_14(iParam6);
	}
	unk_0xA52FC2467E672B55();
}

void func_14(var uParam0)
{
	unk_0x44F4D219F8513945(uParam0);
	unk_0x113A6F657EE871A3();
}

void func_15()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x84795EA8F54230A1(-1, "Menu_Accept", &Global_14382, 1);
		func_16();
	}
}

void func_16()
{
	if (func_17())
	{
		unk_0xD3370B46DD5E27B0(5);
	}
}

int func_17()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xCF4F7FBD80ABE315();
	iVar1 = unk_0xD686D61A57BCB6E7(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2543750 || iVar2)
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
	unk_0xCD27BF29FB9012E2(&Global_2263, 17);
}

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x8FA72E132AAFA62F(sParam7))
	{
		func_14(sParam7);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam8))
	{
		func_14(iParam8);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam9))
	{
		func_14(iParam9);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam10))
	{
		func_14(iParam10);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam11))
	{
		func_14(iParam11);
	}
	unk_0xA52FC2467E672B55();
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
	if (unk_0x30E5EC01C9ACF9BC(2))
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
	unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
	func_23();
}

void func_23()
{
	if (func_17())
	{
		if (Global_14556 == 0)
		{
			unk_0xD3370B46DD5E27B0(2);
		}
		else
		{
			unk_0xD3370B46DD5E27B0(1);
		}
	}
}

void func_24()
{
	func_9(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
	func_25();
}

void func_25()
{
	if (func_17())
	{
		if (Global_14556 == 0)
		{
			unk_0xD3370B46DD5E27B0(1);
		}
		else
		{
			unk_0xD3370B46DD5E27B0(2);
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
	unk_0xCD27BF29FB9012E2(&Global_2263, 17);
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
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
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
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_33(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_32(unk_0x507DA4994C3D8EBD());
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

int func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(uParam0);
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

