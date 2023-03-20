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
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_51[25];
	int iLocal_202 = 0;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
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
	unk_0x15378F974E08496E();
	func_27();
	func_26();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_23 == 0)
		{
			if (Global_14394.f_1 != 9)
			{
				switch (Global_14394.f_1)
				{
					case 7:
						if ((iLocal_209 == 0 && iLocal_210 == 0) && Global_16728 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_14362, 0) && iLocal_209 == 0) && iLocal_210 == 0)
						{
							func_14();
							Global_14372 = 1;
							if (Global_14394.f_1 > 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_209)
				{
					func_9();
				}
				if (iLocal_210)
				{
					func_8();
				}
			}
			else
			{
				Global_14396 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
		}
	}
}

int func_1()
{
	if (((Global_14394.f_1 == 1 || Global_14394.f_1 == 3) || Global_14394.f_1 == 0) || Global_14338 == 1)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	iLocal_24 = unk_0x2DF17A04AAA2B5C3(0);
	switch (iLocal_24)
	{
		case 0:
			iLocal_23 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14394.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	int iVar0;
	
	func_7(Global_14375, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_20 = unk_0xC1CB9B51F2EA571C();
	iLocal_21 = 0;
	iVar0 = 0;
	while (iLocal_21 < iLocal_20)
	{
		if (unk_0x410482B79B426461(iLocal_21))
		{
			func_6(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Local_51[iLocal_21 /*6*/]), 0, 0, 0, 0);
			iLocal_25[iVar0] = iLocal_21;
			iVar0++;
		}
		iLocal_21++;
	}
	func_7(Global_14375, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_14375, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_14382)
	{
		func_6(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xC69E84EBBD7166E6(&Global_2264, 17);
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	func_5(sParam2);
	if (!unk_0xB318FDA0D1ABDB20(iParam3))
	{
		func_5(iParam3);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam4))
	{
		func_5(iParam4);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam5))
	{
		func_5(iParam5);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam6))
	{
		func_5(iParam6);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_5(var uParam0)
{
	unk_0x6CE839BF5D87A428(uParam0);
	unk_0xC3822F70D0E7940B();
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam7))
	{
		func_5(sParam7);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam8))
	{
		func_5(iParam8);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam9))
	{
		func_5(iParam9);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam10))
	{
		func_5(iParam10);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam11))
	{
		func_5(iParam11);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBA9BA6181F2B6111();
}

void func_8()
{
	if (iLocal_209 == 0 && iLocal_210 == 1)
	{
		if (iLocal_214)
		{
			Local_206.f_0 = (Local_206.f_0 + 1f);
		}
		if (Local_206.f_0 > Local_203.f_0 || Local_206.f_0 == Local_203.f_0)
		{
			Local_206.f_0 = Local_203.f_0;
			iLocal_214 = 0;
		}
		if (iLocal_215)
		{
			Local_206.f_1 = (Local_206.f_1 - 2f);
		}
		if (Local_206.f_1 < Local_203.f_1 || Local_206.f_1 == Local_203.f_1)
		{
			Local_206.f_1 = Local_203.f_1;
			iLocal_215 = 0;
		}
		if (iLocal_216)
		{
			Local_206.f_2 = (Local_206.f_2 - 7f);
		}
		if (Local_206.f_2 < Local_203.f_2 || Local_206.f_2 == Local_203.f_2)
		{
			Local_206.f_2 = Local_203.f_2;
			iLocal_216 = 0;
		}
		if ((iLocal_214 == 0 && iLocal_215 == 0) && iLocal_216 == 0)
		{
			iLocal_210 = 0;
			if (Global_14394.f_1 > 3)
			{
				Global_14394.f_1 = 7;
				unk_0xB8BB626315D394F5(1);
				Global_16730 = 1;
				func_26();
			}
		}
		unk_0xA1D5DA13E8B9FEED(Local_206, 0);
	}
}

void func_9()
{
	if ((iLocal_209 == 1 && iLocal_210 == 0) && Global_16728 == 6)
	{
		if (iLocal_211)
		{
			Local_206.f_0 = (Local_206.f_0 - 1f);
		}
		if (Local_206.f_0 < Local_203.f_0 || Local_206.f_0 == Local_203.f_0)
		{
			Local_206.f_0 = Local_203.f_0;
			iLocal_211 = 0;
		}
		if (iLocal_212)
		{
			Local_206.f_1 = (Local_206.f_1 - 0.5f);
		}
		if (Local_206.f_1 < Local_203.f_1 || Local_206.f_1 == Local_203.f_1)
		{
			Local_206.f_1 = Local_203.f_1;
			iLocal_212 = 0;
		}
		if (iLocal_213)
		{
			Local_206.f_2 = (Local_206.f_2 + 7f);
		}
		if (Local_206.f_2 > Local_203.f_2 || Local_206.f_2 == Local_203.f_2)
		{
			Local_206.f_2 = Local_203.f_2;
			iLocal_213 = 0;
		}
		if ((iLocal_211 == 0 && iLocal_212 == 0) && iLocal_213 == 0)
		{
			iLocal_209 = 0;
			func_10("CELL_MSHELP_2");
		}
		unk_0xA1D5DA13E8B9FEED(Local_206, 0);
	}
	if (unk_0x236D8AD7EE179F46(Global_2265, 15))
	{
		iLocal_209 = 0;
		iLocal_210 = 0;
		func_7(Global_14375, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_14382)
		{
			func_6(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xC69E84EBBD7166E6(&Global_2264, 17);
		func_7(Global_14375, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_14375, "SET_HEADER", &(Local_51[iLocal_22 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

void func_11()
{
	Global_16730 = 1;
	unk_0xB8BB626315D394F5(1);
	unk_0xC23A229F78DAD92A();
}

int func_12()
{
	if (Global_2870 == 1 || Global_14394.f_1 < 7)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_13()
{
	if (iLocal_209 == 0)
	{
		unk_0xB62270025DC65D38(&Local_206, 0);
		Local_203 = { Global_14354 };
		iLocal_210 = 1;
		iLocal_214 = 1;
		iLocal_215 = 1;
		iLocal_216 = 1;
	}
}

void func_14()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Back", &Global_14383, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x093DEAE9A023FAA0(iParam0, iParam1) || (iParam2 == 1 && unk_0x5BD35B90C0693406(iParam0, iParam1)))
	{
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (unk_0x87E58291A874D55F() == 0 || (unk_0x18138B3C6FD07449() && unk_0x3D6272A8E1C449E9(2)))
			{
				return 0;
			}
		}
		if (unk_0xDB10DED5ABC4AA20() || unk_0x30D46D6512711A3E())
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

void func_16()
{
	if (iLocal_202)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_202 = 0;
		}
	}
	if (unk_0x3D6272A8E1C449E9(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_202 == 0)
	{
		if (func_15(2, Global_14370, 0))
		{
			func_20();
			iLocal_202 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_15(2, Global_14371, 0))
		{
			func_17();
			iLocal_202 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_17()
{
	func_7(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_14557 == 0)
		{
			unk_0xFFC5C53467CD6DB5(2);
		}
		else
		{
			unk_0xFFC5C53467CD6DB5(1);
		}
	}
}

int func_19()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69020)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x60FC347BF9CAD1BD();
	iVar1 = unk_0x7FCE6803A3D23268(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2550579 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_7(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_14557 == 0)
		{
			unk_0xFFC5C53467CD6DB5(1);
		}
		else
		{
			unk_0xFFC5C53467CD6DB5(2);
		}
	}
}

void func_22()
{
	int iVar0;
	
	if (Global_14372 == 0)
	{
		if (func_15(2, Global_14363, 0))
		{
			unk_0xC69E84EBBD7166E6(&Global_2265, 15);
			func_24();
			Global_14372 = 1;
			unk_0x21ED0FC9B5CC748B(Global_14375, "GET_CURRENT_SELECTION");
			uLocal_19 = unk_0x723E3684EF582590();
			while (!unk_0xAB56DCBFCD98FF03(uLocal_19))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar0 = unk_0x2D1F70CC7C051146(uLocal_19);
			if (iVar0 > -1)
			{
				iLocal_22 = iLocal_25[iVar0];
				if (Global_14394.f_1 > 3)
				{
					if (Global_16728 == 0)
					{
						func_7(Global_14375, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_14375, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_14375, "SET_HEADER", &(Local_51[iLocal_22 /*6*/]), 0, 0, 0, 0);
						if (Global_14382)
						{
							func_6(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xC69E84EBBD7166E6(&Global_2264, 17);
						Global_16732 = iLocal_22;
						Global_16728 = 12;
						Global_14394.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_210 == 0)
	{
		unk_0xB62270025DC65D38(&Local_206, 0);
		Local_203 = { -90.3f, -0.8f, 90f };
		iLocal_209 = 1;
		iLocal_211 = 1;
		iLocal_212 = 1;
		iLocal_213 = 1;
	}
}

void func_24()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Accept", &Global_14383, 1);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		unk_0xFFC5C53467CD6DB5(5);
	}
}

void func_26()
{
	if ((unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2()) || unk_0x913B1C01C1BA6C6F())
	{
		unk_0x90A9820101725170();
		if (unk_0xF38543B560B70CE2(0))
		{
			iLocal_23 = 1;
		}
		else
		{
			Global_16730 = 1;
			Global_14394.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()
{
	StringCopy(&(Local_51[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_51[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_51[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_51[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_51[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_51[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_51[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_51[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_51[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_51[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_51[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_51[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_51[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_51[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_51[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_51[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_51[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_51[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_51[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_51[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

