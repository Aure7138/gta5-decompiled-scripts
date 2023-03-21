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
	int iLocal_20 = 0;
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
	unk_0x0A2FDF6E490B25B3();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		unk_0xC1B1E9A034A63A62(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && unk_0x83666F9FB8FEBD4B() > 1500)
					{
						func_6();
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_19454, 0))
					{
						func_4();
						Global_19464 = 1;
						if (Global_19486.f_1 > 3)
						{
							Global_19486.f_1 = 7;
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
			Global_19488 = 6;
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
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x9C9E32388A7886A2();
}

int func_3()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x9964F5BBD9415AB7(-1, "Menu_Back", &Global_19475, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x26BB91778477F482(iParam0, uParam1) || (iParam2 == 1 && unk_0x80E2BA2BD5AB1A3F(iParam0, uParam1)))
	{
		if (unk_0xE434AB6E3DE89861())
		{
			if (unk_0x2F972EA053458B78() == 0 || (unk_0x4ABA84DE907E0474() && unk_0x59415A8719336539(2)))
			{
				return 0;
			}
		}
		if (unk_0xCD97B9861557C025() || unk_0x8E01A12946ECF396())
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
	func_7();
}

void func_7()
{
	func_9(Global_19467, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xF1BC72CEC2746995(Global_19467, "SET_DATA_SLOT");
	unk_0xD02F24F3E2DB263A(24);
	unk_0xD02F24F3E2DB263A(0);
	if (unk_0xA2BC31158C8CEFD2(Global_4269615, 23))
	{
		unk_0x282C78036676E0C2(0);
		func_8("CELL_EXTBYOU");
		unk_0xD02F24F3E2DB263A(Global_4269616);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269896));
		unk_0xD02F24F3E2DB263A(Global_4269617);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269896.f_1));
		unk_0xD02F24F3E2DB263A(Global_4269618);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269896.f_2));
		func_8("CELL_BODYG");
		unk_0xD02F24F3E2DB263A(Global_4269619);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269899));
		unk_0xD02F24F3E2DB263A(Global_4269620);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269899.f_1));
		unk_0xD02F24F3E2DB263A(Global_4269621);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269899.f_2));
	}
	else
	{
		unk_0x282C78036676E0C2(0);
		func_8("CELL_EXTBYOU");
		unk_0xD02F24F3E2DB263A(Global_4269619);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269899));
		unk_0xD02F24F3E2DB263A(Global_4269620);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269899.f_1));
		unk_0xD02F24F3E2DB263A(Global_4269621);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269899.f_2));
		func_8("CELL_EXTBTARG");
		unk_0xD02F24F3E2DB263A(Global_4269616);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269896));
		unk_0xD02F24F3E2DB263A(Global_4269617);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269896.f_1));
		unk_0xD02F24F3E2DB263A(Global_4269618);
		unk_0xD02F24F3E2DB263A(unk_0xF34EE736CF047844(Global_4269896.f_2));
	}
	unk_0xAC7C2DE2DDC7AF03();
	func_9(Global_19467, "DISPLAY_VIEW", 24f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(sParam0);
	unk_0x81019766FF500CCA();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_19474)
	{
		func_12(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x3B76114EC84D5812(&Global_7356, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9591DE0F00127F2A(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0x9591DE0F00127F2A(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0x9591DE0F00127F2A(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0x9591DE0F00127F2A(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0x9591DE0F00127F2A(iParam11))
	{
		func_8(iParam11);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

