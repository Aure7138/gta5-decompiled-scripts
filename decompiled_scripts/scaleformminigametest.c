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
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	uLocal_20 = unk_0xDF811B9EAB020A4D(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x31E6EB2040318451(500);
	}
	if (unk_0x24862A9CDC8F8874(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x31DC2CEFEF13C96D("p_bubblegum");
	while (!unk_0xF518F3C7FACD43B7(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			uLocal_19 = unk_0xFE4F2696906F18A3("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x844838E5D8A21336(uLocal_19))
			{
				unk_0xF24FE6EB928DD893(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xBCE58DAD703266B5(uLocal_19, 0.01f);
				unk_0x116B2E22C56AB385(uLocal_19, 0.02f);
				unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
			}
			unk_0x31FDDAFCCFEFA478(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x06D856499865F31F(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14392 == 0)
	{
		if (unk_0x0139E142C27412BC(2, 189) || unk_0x0139E142C27412BC(2, 190))
		{
			Global_14392 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14392 = 0;
	}
	if (Global_14392 == 0)
	{
		if (unk_0x8D9008B8900A28D0(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x0139E142C27412BC(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x0139E142C27412BC(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(10);
			unk_0x512B59C08EAFA3B9(fLocal_25);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x8D9008B8900A28D0(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x0139E142C27412BC(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x0139E142C27412BC(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(11);
			unk_0x512B59C08EAFA3B9(fLocal_28);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x8D9008B8900A28D0(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x0139E142C27412BC(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x0139E142C27412BC(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(8);
			unk_0x512B59C08EAFA3B9(fLocal_31);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x8D9008B8900A28D0(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x0139E142C27412BC(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x0139E142C27412BC(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(9);
			unk_0x512B59C08EAFA3B9(fLocal_34);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x8D9008B8900A28D0(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x0139E142C27412BC(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x0139E142C27412BC(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(17);
			unk_0x512B59C08EAFA3B9(fLocal_37);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x8D9008B8900A28D0(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x0139E142C27412BC(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x0139E142C27412BC(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(15);
			unk_0x512B59C08EAFA3B9(fLocal_40);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x8D9008B8900A28D0(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x0139E142C27412BC(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x0139E142C27412BC(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(16);
			unk_0x512B59C08EAFA3B9(fLocal_43);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x8D9008B8900A28D0(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x0139E142C27412BC(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x0139E142C27412BC(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(14);
			unk_0x512B59C08EAFA3B9(fLocal_46);
			unk_0xD013AC29829DDC02();
		}
	}
}

void func_2()
{
	if (unk_0x844838E5D8A21336(uLocal_19))
	{
		unk_0x5CF5A880ED809DDA(uLocal_19, 0);
	}
	unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0x6F9EF355924EC498(0);
	unk_0x9F4AA6F234E8A860(1);
	unk_0xEF145906684E3D72(&uLocal_18);
	unk_0xA4E0D8FD51F2A6F7();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x59A0729D503ED758(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14571)
	{
		func_6(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_5())
	{
		Global_14413.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
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
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

