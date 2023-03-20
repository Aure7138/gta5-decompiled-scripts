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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iVar0 = func_13();
	if (unk_0xC968670BFACE42D9(3))
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		if (unk_0x85F01B8D5B90570E(iVar0))
		{
			switch (iLocal_44)
			{
				case 0:
					func_11(&iVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
					func_10(&iVar0);
					iLocal_45 = unk_0x9CD27B0045628463();
					iLocal_44 = 1;
					break;
				
				case 1:
					if ((unk_0x9CD27B0045628463() - iLocal_45) > 3000)
					{
						func_9(&iVar0);
						iLocal_44 = 2;
					}
					break;
			}
			if (func_1(&iVar0, 0))
			{
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(int iParam0, bool bParam1)
{
	if (!func_8(&(iParam0->f_2)))
	{
		func_6(&(iParam0->f_2));
	}
	unk_0x6806C51AD12B83B8(14);
	unk_0x61BB1D9B3A95D802(1);
	unk_0x54972ADAF0294A93(*iParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (bParam1)
	{
		if (unk_0xF3A21BCD95725A4A(2, 201))
		{
			return 0;
		}
	}
	if (iParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_3(&(iParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(iParam0->f_1)
	{
		func_2(&(iParam0->f_2));
		return 0;
	}
	return 1;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_3(var uParam0)
{
	if (func_8(uParam0))
	{
		if (func_5(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_4() - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_4()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

bool func_5(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 2);
}

void func_6(int* iParam0)
{
	func_7(iParam0, 0f);
}

void func_7(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_4() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 1);
}

void func_9(int iParam0)
{
	iParam0->f_1 = 300;
	func_6(&(iParam0->f_2));
	unk_0xF6E48914C7A8694E(*iParam0, "SPLASH_TEXT_TRANSITION_OUT");
	unk_0xC3D0841A0CC546A6(300);
	unk_0xC6796A8FFA375E53();
}

void func_10(int iParam0)
{
	unk_0xF6E48914C7A8694E(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
	unk_0xC6796A8FFA375E53();
}

void func_11(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	iParam0->f_1 = -1;
	unk_0xF6E48914C7A8694E(*iParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	unk_0xC3D0841A0CC546A6(iParam2);
	unk_0xC3D0841A0CC546A6(iParam3);
	unk_0xC3D0841A0CC546A6(iParam4);
	unk_0xC3D0841A0CC546A6(iParam5);
	unk_0xC6796A8FFA375E53();
	if (bParam6)
	{
		unk_0xF6E48914C7A8694E(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
		unk_0xC6796A8FFA375E53();
	}
}

void func_12(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

int func_13()
{
	return unk_0x11FE353CF9733E6F("SPLASH_TEXT");
}

