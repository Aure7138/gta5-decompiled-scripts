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
	if (unk_0x2C22E7D1C80A53EF())
	{
		unk_0xA0303A6B8C99DD6A(500);
	}
	if (unk_0x2EC83C7ACA23E8A4(3))
	{
		func_5();
	}
	uLocal_19 = unk_0x474309DF4921072A("instructional_buttons");
	while (!unk_0x1E3F61C2C1E29520(uLocal_19))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x0F83039847376F53(uLocal_19, 255, 255, 255, 0, 0);
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
			unk_0xB9D4F4DE7E7EC038(uParam1, "CLEAR_ALL");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_CLEAR_SPACE");
			unk_0x7CBFB9F4AF33C67E(200);
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(0);
			func_3(unk_0x62B1FF1B5EE703A7(2, 191, 1));
			func_2("PRESS A");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(1);
			func_3(unk_0x62B1FF1B5EE703A7(2, 194, 1));
			func_2("PRESS B");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(2);
			func_3(unk_0x62B1FF1B5EE703A7(2, 193, 1));
			func_2("PRESS X");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(3);
			func_3(unk_0x62B1FF1B5EE703A7(2, 192, 1));
			func_2("PRESS Y");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(80);
			unk_0xE73340DA551C95E1();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0xB9D4F4DE7E7EC038(uParam1, "CLEAR_ALL");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_CLEAR_SPACE");
			unk_0x7CBFB9F4AF33C67E(200);
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(0);
			func_3(unk_0x62B1FF1B5EE703A7(2, 187, 1));
			func_2("DOWN");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(1);
			func_3(unk_0x62B1FF1B5EE703A7(2, 188, 1));
			func_2("UP");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(2);
			func_3(unk_0x62B1FF1B5EE703A7(2, 190, 1));
			func_2("LEFT");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(3);
			func_3(unk_0x62B1FF1B5EE703A7(2, 189, 1));
			func_2("RIGHT");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(80);
			unk_0xE73340DA551C95E1();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0xB9D4F4DE7E7EC038(uParam1, "CLEAR_ALL");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_CLEAR_SPACE");
			unk_0x7CBFB9F4AF33C67E(200);
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_DATA_SLOT");
			unk_0x7CBFB9F4AF33C67E(0);
			func_3(unk_0x62B1FF1B5EE703A7(2, 202, 1));
			func_2("BACK");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(80);
			unk_0xE73340DA551C95E1();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_3(var uParam0)
{
	unk_0x481EA0389B099920(uParam0);
}

void func_4()
{
	if (Global_14422 == 0)
	{
		if (((((((((unk_0x7F6103BD34B839B0(2, 189) || unk_0x7F6103BD34B839B0(2, 190)) || unk_0x7F6103BD34B839B0(2, 188)) || unk_0x7F6103BD34B839B0(2, 187)) || unk_0x7F6103BD34B839B0(2, 205)) || unk_0x7F6103BD34B839B0(2, 206)) || unk_0x7F6103BD34B839B0(2, 207)) || unk_0x7F6103BD34B839B0(2, 208)) || unk_0x7F6103BD34B839B0(2, 201)) || unk_0x7F6103BD34B839B0(2, 202))
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
		if (unk_0x7F6103BD34B839B0(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0x7F6103BD34B839B0(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0x7F6103BD34B839B0(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0x7F6103BD34B839B0(2, 205))
		{
		}
		if (unk_0x7F6103BD34B839B0(2, 206))
		{
		}
		if (unk_0x7F6103BD34B839B0(2, 207))
		{
		}
		if (unk_0x7F6103BD34B839B0(2, 208))
		{
		}
		if (unk_0x7F6103BD34B839B0(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0x7F6103BD34B839B0(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0x7F6103BD34B839B0(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0x7F6103BD34B839B0(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0x7F6103BD34B839B0(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0x7F6103BD34B839B0(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0x6B0F857FD4BCD4AB(0);
	unk_0xA12A0D38735CCBF2(&uLocal_19);
	unk_0x78C587487CD40B92();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_11();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0x88B0F0DC270164B7(&Global_2314, 16);
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
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
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
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
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

