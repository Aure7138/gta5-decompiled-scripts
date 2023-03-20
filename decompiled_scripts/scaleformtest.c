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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
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
	if (unk_0x7E3640C27B17457C())
	{
		unk_0xFF11D473E95357D3(500);
	}
	if (unk_0x2170E7BC25114A22(3))
	{
		func_5();
	}
	uLocal_19 = unk_0x542F16A736FAC9A6("instructional_buttons");
	while (!unk_0x52622CA85B1C304B(uLocal_19))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x131F832AD6923854(uLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, uLocal_19);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x3B6EF6403E3F1CAC(uParam1, "CLEAR_ALL");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_CLEAR_SPACE");
			unk_0x1B215CC37BF52E79(200);
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_DATA_SLOT");
			unk_0x1B215CC37BF52E79(0);
			func_3(unk_0xE78ECEC3BC74DC0C(2, 191, 1));
			func_2("PRESS A");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_DATA_SLOT");
			unk_0x1B215CC37BF52E79(1);
			func_3(unk_0xE78ECEC3BC74DC0C(2, 194, 1));
			func_2("PRESS B");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_DATA_SLOT");
			unk_0x1B215CC37BF52E79(2);
			func_3(unk_0xE78ECEC3BC74DC0C(2, 193, 1));
			func_2("PRESS X");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_DATA_SLOT");
			unk_0x1B215CC37BF52E79(3);
			func_3(unk_0xE78ECEC3BC74DC0C(2, 192, 1));
			func_2("PRESS Y");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(80);
			unk_0xBBAAC5B2437ACF2A();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0x3B6EF6403E3F1CAC(uParam1, "CLEAR_ALL");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_CLEAR_SPACE");
			unk_0x1B215CC37BF52E79(200);
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_DATA_SLOT");
			unk_0x1B215CC37BF52E79(0);
			func_3(unk_0xE78ECEC3BC74DC0C(2, 187, 1));
			func_2("DOWN");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_DATA_SLOT");
			unk_0x1B215CC37BF52E79(1);
			func_3(unk_0xE78ECEC3BC74DC0C(2, 188, 1));
			func_2("UP");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_DATA_SLOT");
			unk_0x1B215CC37BF52E79(2);
			func_3(unk_0xE78ECEC3BC74DC0C(2, 190, 1));
			func_2("LEFT");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_DATA_SLOT");
			unk_0x1B215CC37BF52E79(3);
			func_3(unk_0xE78ECEC3BC74DC0C(2, 189, 1));
			func_2("RIGHT");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(80);
			unk_0xBBAAC5B2437ACF2A();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0x3B6EF6403E3F1CAC(uParam1, "CLEAR_ALL");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_CLEAR_SPACE");
			unk_0x1B215CC37BF52E79(200);
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_DATA_SLOT");
			unk_0x1B215CC37BF52E79(0);
			func_3(unk_0xE78ECEC3BC74DC0C(2, 202, 1));
			func_2("BACK");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(80);
			unk_0xBBAAC5B2437ACF2A();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

void func_3(var uParam0)
{
	unk_0xDC0269D08B29626C(uParam0);
}

void func_4()
{
	if (Global_14422 == 0)
	{
		if (((((((((unk_0xF334707DE9C8DE80(2, 189) || unk_0xF334707DE9C8DE80(2, 190)) || unk_0xF334707DE9C8DE80(2, 188)) || unk_0xF334707DE9C8DE80(2, 187)) || unk_0xF334707DE9C8DE80(2, 205)) || unk_0xF334707DE9C8DE80(2, 206)) || unk_0xF334707DE9C8DE80(2, 207)) || unk_0xF334707DE9C8DE80(2, 208)) || unk_0xF334707DE9C8DE80(2, 201)) || unk_0xF334707DE9C8DE80(2, 202))
		{
			Global_14422 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14422 = 0;
	}
	if (Global_14422 == 0)
	{
		if (unk_0xF334707DE9C8DE80(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0xF334707DE9C8DE80(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0xF334707DE9C8DE80(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0xF334707DE9C8DE80(2, 205))
		{
		}
		if (unk_0xF334707DE9C8DE80(2, 206))
		{
		}
		if (unk_0xF334707DE9C8DE80(2, 207))
		{
		}
		if (unk_0xF334707DE9C8DE80(2, 208))
		{
		}
		if (unk_0xF334707DE9C8DE80(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0xF334707DE9C8DE80(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0xF334707DE9C8DE80(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0xF334707DE9C8DE80(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0xF334707DE9C8DE80(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0xF334707DE9C8DE80(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0xFD1B7FD28DB51A48(0);
	unk_0x4292FC2ED4EC4212(&uLocal_19);
	unk_0x01DFCA3621B68C4A();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_11();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xB8A73E7DA87B2968(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_10(0))
		{
			func_7(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_7(int iParam0)
{
	if (Global_14604)
	{
		func_9(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_8())
	{
		Global_14443.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

