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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	struct<26> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	char cLocal_52[32] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
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
	iLocal_51 = -99;
	StringCopy(&cLocal_52, "TRACKID", 32);
	unk_0xC1A27D367CCA8C15();
	unk_0x900CF084251DED26(&cLocal_52, 1);
	while (!unk_0xFA9040D29FE330BD(1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_15();
	func_14();
	func_11();
	unk_0xC1B1E9A034A63A62(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_61)
		{
			if (iLocal_63 < 101)
			{
				if (unk_0x83666F9FB8FEBD4B() > 30)
				{
					iLocal_63++;
					unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(23);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(1);
					func_10("CELL_4005");
					unk_0x1E1FB49121565EB6(iLocal_63);
					unk_0xF9FBC2F3F73D94C9();
					func_9(Global_14474, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(23);
				unk_0x1E1FB49121565EB6(0);
				unk_0x1E1FB49121565EB6(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				unk_0xF9FBC2F3F73D94C9();
				func_9(Global_14474, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
				iLocal_62 = 1;
				iLocal_61 = 0;
			}
		}
		if (Global_14493.f_1 != 9)
		{
			switch (Global_14493.f_1)
			{
				case 7:
					func_8();
					if (iLocal_60 == 0)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_14461, 0))
					{
						func_4();
						iLocal_61 = 0;
						iLocal_62 = 0;
						Global_14471 = 1;
						func_14();
						if (Global_14493.f_1 > 3)
						{
							Global_14493.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_14495 = 6;
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
	if (((Global_14493.f_1 == 1 || Global_14493.f_1 == 3) || Global_14493.f_1 == 0) || Global_14437 == 1)
	{
		Global_14480 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	iLocal_61 = 0;
	unk_0x95E4B6F3ED223F5A();
}

int func_3()
{
	if (Global_2969 == 1 || Global_14493.f_1 < 7)
	{
		Global_14480 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_14482, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x694514BD37EC4E94(iParam0, uParam1) || (iParam2 == 1 && unk_0xF7DDAAF0EFDAFA22(iParam0, uParam1)))
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x0F8865E539C1FCE8() == 0 || (unk_0xF32BA80A2DED1FC6() && unk_0x50465D2C022B9E04(2)))
			{
				return 0;
			}
		}
		if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
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

void func_6()
{
	if (unk_0x83666F9FB8FEBD4B() > 2200)
	{
		if (Global_14481)
		{
			func_7(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_60 = 1;
	}
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		func_10(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_10(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_8()
{
	if (Global_14471 == 0)
	{
		if (func_5(2, Global_14462, 0))
		{
			if ((iLocal_60 && iLocal_62 == 0) && iLocal_61 == 0)
			{
				iLocal_63 = 0;
				unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(23);
				unk_0x1E1FB49121565EB6(0);
				unk_0x1E1FB49121565EB6(1);
				func_10("CELL_4005");
				unk_0x1E1FB49121565EB6(iLocal_63);
				unk_0xF9FBC2F3F73D94C9();
				func_9(Global_14474, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
				if (Global_14481)
				{
					func_7(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					func_7(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_7(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
				iLocal_61 = 1;
				unk_0xC1B1E9A034A63A62(0);
			}
		}
	}
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_10(char* sParam0)
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_11()
{
	int iVar0;
	
	func_13(134, 1);
	iVar0 = unk_0x93DD0CE3F3963C56();
	switch (func_12(iVar0))
	{
		case 1:
			func_13(82, 1);
			break;
		
		case 2:
			func_13(81, 1);
			break;
		
		default:
			func_13(83, 1);
			break;
	}
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_14()
{
	unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(23);
	unk_0x1E1FB49121565EB6(0);
	unk_0x1E1FB49121565EB6(0);
	func_10("CELL_4001");
	func_10(&Local_20);
	func_10(&(Local_20.f_16));
	func_10("CELL_4002");
	unk_0x1E1FB49121565EB6(Local_20.f_24);
	func_10("CELL_4003");
	func_10(&(Local_20.f_25));
	func_10("CELL_4004");
	unk_0xF9FBC2F3F73D94C9();
	func_9(Global_14474, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
	if (Global_14481)
	{
		if (iLocal_60)
		{
			func_7(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		func_7(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_60)
		{
			func_7(Global_14474, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_7(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
}

void func_15()
{
	iLocal_51 = unk_0xB28391B2C157AC9B();
	StringCopy(&Local_20, "", 64);
	StringIntConCat(&Local_20, iLocal_51, 64);
	StringConCat(&Local_20, "S", 64);
	StringCopy(&(Local_20.f_16), "", 32);
	StringIntConCat(&(Local_20.f_16), iLocal_51, 32);
	StringConCat(&(Local_20.f_16), "A", 32);
	StringCopy(&(Local_20.f_25), unk_0x6451F9ED1F8684A5(), 24);
	if (!unk_0x0F6F4C227FB5DD52(&Local_20))
	{
		StringCopy(&Local_20, "CELL_195", 64);
	}
	if (!unk_0x0F6F4C227FB5DD52(&(Local_20.f_16)))
	{
		StringCopy(&(Local_20.f_16), "CELL_195", 32);
		StringCopy(&(Local_20.f_25), "CELL_195", 24);
	}
}

