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
	if (unk_0xB16FCE9DDC7BA182())
	{
		unk_0xD4E8E24955024033(500);
	}
	if (unk_0xC968670BFACE42D9(3))
	{
		func_2();
	}
	iLocal_17 = unk_0x11FE353CF9733E6F("scaleform_profiling");
	while (!unk_0x85F01B8D5B90570E(iLocal_17))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x54972ADAF0294A93(iLocal_17, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_17);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0)
{
	if (Global_14372 == 0)
	{
		if (((((((unk_0xF3A21BCD95725A4A(2, 189) || unk_0xF3A21BCD95725A4A(2, 190)) || unk_0xF3A21BCD95725A4A(2, 188)) || unk_0xF3A21BCD95725A4A(2, 187)) || unk_0xF3A21BCD95725A4A(2, 205)) || unk_0xF3A21BCD95725A4A(2, 206)) || unk_0xF3A21BCD95725A4A(2, 201)) || unk_0xF3A21BCD95725A4A(2, 202))
		{
			Global_14372 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14372 = 0;
	}
	if (Global_14372 == 0)
	{
		if (unk_0xF3A21BCD95725A4A(2, 189))
		{
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(10);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0xF3A21BCD95725A4A(2, 190))
		{
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(11);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0xF3A21BCD95725A4A(2, 205))
		{
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(4);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0xF3A21BCD95725A4A(2, 206))
		{
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(6);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0xF3A21BCD95725A4A(2, 188))
		{
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(8);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0xF3A21BCD95725A4A(2, 187))
		{
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(9);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0xF3A21BCD95725A4A(2, 201))
		{
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(16);
			unk_0xC6796A8FFA375E53();
		}
		if (unk_0xF3A21BCD95725A4A(2, 202))
		{
			unk_0xF6E48914C7A8694E(iParam0, "SET_INPUT_EVENT");
			unk_0xC3D0841A0CC546A6(17);
			unk_0xC6796A8FFA375E53();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x577D1284D6873711(false);
	unk_0x1D132D614DD86811(&iLocal_17);
	unk_0x1090044AD1DA76FA();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14551)
	{
		func_6(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_5())
	{
		Global_14393.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

