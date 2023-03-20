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
	bool bLocal_22 = 0;
	bool bLocal_23 = 0;
	float fLocal_24 = 0f;
	bool bLocal_25 = 0;
	bool bLocal_26 = 0;
	float fLocal_27 = 0f;
	bool bLocal_28 = 0;
	bool bLocal_29 = 0;
	float fLocal_30 = 0f;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	float fLocal_33 = 0f;
	bool bLocal_34 = 0;
	bool bLocal_35 = 0;
	float fLocal_36 = 0f;
	bool bLocal_37 = 0;
	bool bLocal_38 = 0;
	float fLocal_39 = 0f;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	float fLocal_42 = 0f;
	bool bLocal_43 = 0;
	bool bLocal_44 = 0;
	float fLocal_45 = 0f;
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
	uLocal_19 = unk_0xA949BE56543040D2(100f, 100f, 30f);
	iLocal_21 = 1;
	fLocal_24 = 0f;
	fLocal_27 = 0f;
	fLocal_30 = 0f;
	fLocal_33 = 0f;
	fLocal_36 = 0f;
	fLocal_39 = 0f;
	fLocal_42 = 0f;
	fLocal_45 = 0f;
	if (unk_0x29AFA2493D7C23D0())
	{
		unk_0xAE2B1C30F8A0B67C(500);
	}
	if (unk_0x8D841F1DD3FA555F(3))
	{
		func_2();
	}
	uLocal_17 = unk_0x95EF972E3A07B525("p_bubblegum");
	while (!unk_0xCC8E3BAC62A29F42(uLocal_17))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (iLocal_20 == 1)
		{
		}
		if (iLocal_21 == 1)
		{
			iLocal_21 = 0;
			uLocal_18 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x42E36F2D658EB2FF(uLocal_18))
			{
				unk_0xD269CB43D12C6BF5(uLocal_18, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xE39F607705446D2E(uLocal_18, 0.01f);
				unk_0x93933B2FBD1014C1(uLocal_18, 0.02f);
				unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
			}
			unk_0x8F827BB0F6ED7AA8(uLocal_19, 66);
		}
		iLocal_20 = 1;
		unk_0xD45896EF84BD41C8(uLocal_17, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_17);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14373 == 0)
	{
		if (unk_0xCAD9951C953F5B2D(2, 189) || unk_0xCAD9951C953F5B2D(2, 190))
		{
			Global_14373 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14373 = 0;
	}
	if (Global_14373 == 0)
	{
		if (unk_0x093DEAE9A023FAA0(2, 189))
		{
			bLocal_22 = true;
			fLocal_24 = 1f;
		}
		if (unk_0xCAD9951C953F5B2D(2, 189))
		{
			bLocal_22 = true;
			fLocal_24 = 1f;
		}
		if (!unk_0xCAD9951C953F5B2D(2, 189))
		{
			bLocal_22 = false;
			fLocal_24 = 0f;
		}
		if (!bLocal_22 == bLocal_23)
		{
			bLocal_23 = bLocal_22;
			unk_0x21ED0FC9B5CC748B(uParam0, "SET_INPUT_EVENT");
			unk_0xBD0C54D89298454E(10);
			unk_0x518198639630AE08(fLocal_24);
			unk_0xBA9BA6181F2B6111();
		}
		if (unk_0x093DEAE9A023FAA0(2, 190))
		{
			bLocal_25 = true;
			fLocal_27 = 1f;
		}
		if (unk_0xCAD9951C953F5B2D(2, 190))
		{
			bLocal_25 = true;
			fLocal_27 = 1f;
		}
		if (!unk_0xCAD9951C953F5B2D(2, 190))
		{
			bLocal_25 = false;
			fLocal_27 = 0f;
		}
		if (!bLocal_25 == bLocal_26)
		{
			bLocal_26 = bLocal_25;
			unk_0x21ED0FC9B5CC748B(uParam0, "SET_INPUT_EVENT");
			unk_0xBD0C54D89298454E(11);
			unk_0x518198639630AE08(fLocal_27);
			unk_0xBA9BA6181F2B6111();
		}
		if (unk_0x093DEAE9A023FAA0(2, 188))
		{
			bLocal_28 = true;
			fLocal_30 = 1f;
		}
		if (unk_0xCAD9951C953F5B2D(2, 188))
		{
			bLocal_28 = true;
			fLocal_30 = 1f;
		}
		if (!unk_0xCAD9951C953F5B2D(2, 188))
		{
			bLocal_28 = false;
			fLocal_30 = 0f;
		}
		if (!bLocal_28 == bLocal_29)
		{
			bLocal_29 = bLocal_28;
			unk_0x21ED0FC9B5CC748B(uParam0, "SET_INPUT_EVENT");
			unk_0xBD0C54D89298454E(8);
			unk_0x518198639630AE08(fLocal_30);
			unk_0xBA9BA6181F2B6111();
		}
		if (unk_0x093DEAE9A023FAA0(2, 187))
		{
			bLocal_31 = true;
			fLocal_33 = 1f;
		}
		if (unk_0xCAD9951C953F5B2D(2, 187))
		{
			bLocal_31 = true;
			fLocal_33 = 1f;
		}
		if (!unk_0xCAD9951C953F5B2D(2, 187))
		{
			bLocal_31 = false;
			fLocal_33 = 0f;
		}
		if (!bLocal_31 == bLocal_32)
		{
			bLocal_32 = bLocal_31;
			unk_0x21ED0FC9B5CC748B(uParam0, "SET_INPUT_EVENT");
			unk_0xBD0C54D89298454E(9);
			unk_0x518198639630AE08(fLocal_33);
			unk_0xBA9BA6181F2B6111();
		}
		if (unk_0x093DEAE9A023FAA0(2, 202))
		{
			bLocal_34 = true;
			fLocal_36 = 1f;
		}
		if (unk_0xCAD9951C953F5B2D(2, 202))
		{
			bLocal_34 = true;
			fLocal_36 = 1f;
		}
		if (!unk_0xCAD9951C953F5B2D(2, 202))
		{
			bLocal_34 = false;
			fLocal_36 = 0f;
		}
		if (!bLocal_34 == bLocal_35)
		{
			bLocal_35 = bLocal_34;
			unk_0x21ED0FC9B5CC748B(uParam0, "SET_INPUT_EVENT");
			unk_0xBD0C54D89298454E(17);
			unk_0x518198639630AE08(fLocal_36);
			unk_0xBA9BA6181F2B6111();
		}
		if (unk_0x093DEAE9A023FAA0(2, 204))
		{
			bLocal_37 = true;
			fLocal_39 = 1f;
		}
		if (unk_0xCAD9951C953F5B2D(2, 204))
		{
			bLocal_37 = true;
			fLocal_39 = 1f;
		}
		if (!unk_0xCAD9951C953F5B2D(2, 204))
		{
			bLocal_37 = false;
			fLocal_39 = 0f;
		}
		if (!bLocal_37 == bLocal_38)
		{
			bLocal_38 = bLocal_37;
			unk_0x21ED0FC9B5CC748B(uParam0, "SET_INPUT_EVENT");
			unk_0xBD0C54D89298454E(15);
			unk_0x518198639630AE08(fLocal_39);
			unk_0xBA9BA6181F2B6111();
		}
		if (unk_0x093DEAE9A023FAA0(2, 201))
		{
			bLocal_40 = true;
			fLocal_42 = 1f;
		}
		if (unk_0xCAD9951C953F5B2D(2, 201))
		{
			bLocal_40 = true;
			fLocal_42 = 1f;
		}
		if (!unk_0xCAD9951C953F5B2D(2, 201))
		{
			bLocal_40 = false;
			fLocal_42 = 0f;
		}
		if (!bLocal_40 == bLocal_41)
		{
			bLocal_41 = bLocal_40;
			unk_0x21ED0FC9B5CC748B(uParam0, "SET_INPUT_EVENT");
			unk_0xBD0C54D89298454E(16);
			unk_0x518198639630AE08(fLocal_42);
			unk_0xBA9BA6181F2B6111();
		}
		if (unk_0x093DEAE9A023FAA0(2, 203))
		{
			bLocal_43 = true;
			fLocal_45 = 1f;
		}
		if (unk_0xCAD9951C953F5B2D(2, 203))
		{
			bLocal_43 = true;
			fLocal_45 = 1f;
		}
		if (!unk_0xCAD9951C953F5B2D(2, 203))
		{
			bLocal_43 = false;
			fLocal_45 = 0f;
		}
		if (!bLocal_43 == bLocal_44)
		{
			bLocal_44 = bLocal_43;
			unk_0x21ED0FC9B5CC748B(uParam0, "SET_INPUT_EVENT");
			unk_0xBD0C54D89298454E(14);
			unk_0x518198639630AE08(fLocal_45);
			unk_0xBA9BA6181F2B6111();
		}
	}
}

void func_2()
{
	if (unk_0x42E36F2D658EB2FF(uLocal_18))
	{
		unk_0x35B958B469415A23(uLocal_18, 0);
	}
	unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0xD338B0444EFB8C65(0);
	unk_0xB8BB626315D394F5(1);
	unk_0x4B6F01DE8CCE643E(&uLocal_17);
	unk_0xC23A229F78DAD92A();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14394.f_1 == 1)
	{
		if (!Global_14394.f_1 == 0)
		{
			Global_14394.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14552)
	{
		func_6(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_5())
	{
		Global_14394.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
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
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
	}
}

