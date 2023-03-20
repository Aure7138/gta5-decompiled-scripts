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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0x2EC83C7ACA23E8A4(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x955B8C8F89CC3AC0()) && unk_0x1D0435FC97A108C7())
	{
		unk_0xACBEFB0A5F1CF619(1);
		if (!unk_0x2C22E7D1C80A53EF())
		{
			if (!unk_0x44F90FBF2C1E8021())
			{
				unk_0xF215E3B07B7990BC(800);
			}
		}
		iLocal_20 = unk_0x474309DF4921072A("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x474309DF4921072A("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x1E3F61C2C1E29520(iLocal_20) || !unk_0x1E3F61C2C1E29520(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB9D4F4DE7E7EC038(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xE73340DA551C95E1();
		unk_0xB9D4F4DE7E7EC038(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0xE73340DA551C95E1();
		unk_0xB9D4F4DE7E7EC038(iLocal_21, "SET_DATA_SLOT");
		unk_0x7CBFB9F4AF33C67E(0);
		func_4(unk_0x62B1FF1B5EE703A7(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xE73340DA551C95E1();
		unk_0xB9D4F4DE7E7EC038(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x5CC02BB872FEF340(0);
		unk_0xE73340DA551C95E1();
		while (!unk_0x2C22E7D1C80A53EF())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xD6019C0376F4870E();
		while (!iLocal_22)
		{
			unk_0x08FB11A1AA7022FD();
			unk_0x1373E5003F76E429(7);
			unk_0x0F83039847376F53(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x0F83039847376F53(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x7F6103BD34B839B0(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xACBEFB0A5F1CF619(0);
		func_3(1, 1);
		func_1();
	}
	Global_69886.f_1 = 0;
	unk_0x88B0F0DC270164B7(&(Global_101553.f_8871.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_91445.f_8)
	{
		if (Global_91445.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91445.f_10 > 1)
	{
		return 0;
	}
	Global_91445.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_91445.f_7 = iParam0;
	Global_91445.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x481EA0389B099920(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0xA12A0D38735CCBF2(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0xA12A0D38735CCBF2(&iLocal_21);
	}
	unk_0x1373E5003F76E429(4);
	unk_0xACBEFB0A5F1CF619(0);
	unk_0x78C587487CD40B92();
}

