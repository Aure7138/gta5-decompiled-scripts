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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	if (unk_0xC968670BFACE42D9(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x48AF36444B965238()) && unk_0x6FDDF453C0C756EC())
	{
		unk_0x5262CC1995D07E09(true);
		if (!unk_0xB16FCE9DDC7BA182())
		{
			if (!unk_0x797AC7CB535BA28F())
			{
				unk_0x891B5B39AC6302AF(800);
			}
		}
		iLocal_19 = unk_0x11FE353CF9733E6F("MP_BIG_MESSAGE_FREEMODE");
		iLocal_20 = unk_0x11FE353CF9733E6F("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x85F01B8D5B90570E(iLocal_19) || !unk_0x85F01B8D5B90570E(iLocal_20))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xF6E48914C7A8694E(iLocal_19, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xC6796A8FFA375E53();
		unk_0xF6E48914C7A8694E(iLocal_20, "SET_DATA_SLOT_EMPTY");
		unk_0xC6796A8FFA375E53();
		unk_0xF6E48914C7A8694E(iLocal_20, "SET_DATA_SLOT");
		unk_0xC3D0841A0CC546A6(0);
		func_4(unk_0x0499D7B09FC9B407(2, 201, true));
		func_5("HUD_CONTINUE");
		unk_0xC6796A8FFA375E53();
		unk_0xF6E48914C7A8694E(iLocal_20, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xC58424BA936EB458(false);
		unk_0xC6796A8FFA375E53();
		while (!unk_0xB16FCE9DDC7BA182())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x078EBE9809CCD637();
		while (!iLocal_21)
		{
			unk_0x4B0311D3CDC4648F();
			unk_0x61BB1D9B3A95D802(7);
			unk_0x0DF606929C105BE1(iLocal_19, 255, 255, 255, 0, 0);
			unk_0x0DF606929C105BE1(iLocal_20, 255, 255, 255, 0, 0);
			if (unk_0xF3A21BCD95725A4A(2, 201))
			{
				iLocal_21 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x5262CC1995D07E09(false);
		func_3(1, 1);
		func_1();
	}
	Global_68336.f_1 = 0;
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8237.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_89823.f_7 = iParam0;
	Global_89823.f_8 = iParam1;
}

void func_4(char* sParam0)
{
	unk_0xE83A3E3557A56640(sParam0);
}

void func_5(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_6()
{
	if (iLocal_19 != 0)
	{
		unk_0x1D132D614DD86811(&iLocal_19);
	}
	if (iLocal_20 != 0)
	{
		unk_0x1D132D614DD86811(&iLocal_20);
	}
	unk_0x61BB1D9B3A95D802(4);
	unk_0x5262CC1995D07E09(false);
	unk_0x1090044AD1DA76FA();
}

