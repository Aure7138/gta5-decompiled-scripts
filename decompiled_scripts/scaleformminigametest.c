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
	uLocal_20 = unk_0x6678F4628618607C(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x7E3640C27B17457C())
	{
		unk_0xFF11D473E95357D3(500);
	}
	if (unk_0x2170E7BC25114A22(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x542F16A736FAC9A6("p_bubblegum");
	while (!unk_0x52622CA85B1C304B(uLocal_18))
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
			uLocal_19 = unk_0x1A73881FF34FE74D("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0xE7E9CC62D1C4C0A8(uLocal_19))
			{
				unk_0x42EEFA5696B80105(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xBD77EE63F9259EFF(uLocal_19, 0.01f);
				unk_0xCA489DAF31018317(uLocal_19, 0.02f);
				unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
			}
			unk_0xD6507DB77BCBD904(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x733D2C5CCB2A212B(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14422 == 0)
	{
		if (unk_0xF334707DE9C8DE80(2, 189) || unk_0xF334707DE9C8DE80(2, 190))
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
		if (unk_0x3CEEA45E4779F6BD(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0xF334707DE9C8DE80(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0xF334707DE9C8DE80(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x3B6EF6403E3F1CAC(uParam0, "SET_INPUT_EVENT");
			unk_0x1B215CC37BF52E79(10);
			unk_0x573CAEB6F4A4E750(fLocal_25);
			unk_0xBBAAC5B2437ACF2A();
		}
		if (unk_0x3CEEA45E4779F6BD(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0xF334707DE9C8DE80(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0xF334707DE9C8DE80(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x3B6EF6403E3F1CAC(uParam0, "SET_INPUT_EVENT");
			unk_0x1B215CC37BF52E79(11);
			unk_0x573CAEB6F4A4E750(fLocal_28);
			unk_0xBBAAC5B2437ACF2A();
		}
		if (unk_0x3CEEA45E4779F6BD(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0xF334707DE9C8DE80(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0xF334707DE9C8DE80(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x3B6EF6403E3F1CAC(uParam0, "SET_INPUT_EVENT");
			unk_0x1B215CC37BF52E79(8);
			unk_0x573CAEB6F4A4E750(fLocal_31);
			unk_0xBBAAC5B2437ACF2A();
		}
		if (unk_0x3CEEA45E4779F6BD(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0xF334707DE9C8DE80(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0xF334707DE9C8DE80(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x3B6EF6403E3F1CAC(uParam0, "SET_INPUT_EVENT");
			unk_0x1B215CC37BF52E79(9);
			unk_0x573CAEB6F4A4E750(fLocal_34);
			unk_0xBBAAC5B2437ACF2A();
		}
		if (unk_0x3CEEA45E4779F6BD(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0xF334707DE9C8DE80(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0xF334707DE9C8DE80(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x3B6EF6403E3F1CAC(uParam0, "SET_INPUT_EVENT");
			unk_0x1B215CC37BF52E79(17);
			unk_0x573CAEB6F4A4E750(fLocal_37);
			unk_0xBBAAC5B2437ACF2A();
		}
		if (unk_0x3CEEA45E4779F6BD(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0xF334707DE9C8DE80(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0xF334707DE9C8DE80(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x3B6EF6403E3F1CAC(uParam0, "SET_INPUT_EVENT");
			unk_0x1B215CC37BF52E79(15);
			unk_0x573CAEB6F4A4E750(fLocal_40);
			unk_0xBBAAC5B2437ACF2A();
		}
		if (unk_0x3CEEA45E4779F6BD(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0xF334707DE9C8DE80(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0xF334707DE9C8DE80(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x3B6EF6403E3F1CAC(uParam0, "SET_INPUT_EVENT");
			unk_0x1B215CC37BF52E79(16);
			unk_0x573CAEB6F4A4E750(fLocal_43);
			unk_0xBBAAC5B2437ACF2A();
		}
		if (unk_0x3CEEA45E4779F6BD(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0xF334707DE9C8DE80(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0xF334707DE9C8DE80(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x3B6EF6403E3F1CAC(uParam0, "SET_INPUT_EVENT");
			unk_0x1B215CC37BF52E79(14);
			unk_0x573CAEB6F4A4E750(fLocal_46);
			unk_0xBBAAC5B2437ACF2A();
		}
	}
}

void func_2()
{
	if (unk_0xE7E9CC62D1C4C0A8(uLocal_19))
	{
		unk_0xAF191D67F49B35C9(uLocal_19, 0);
	}
	unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0xFD1B7FD28DB51A48(0);
	unk_0x04890EB0282525A5(1);
	unk_0x4292FC2ED4EC4212(&uLocal_18);
	unk_0x01DFCA3621B68C4A();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xB8A73E7DA87B2968(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (Global_14604)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14443.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
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

int func_7(int iParam0)
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

void func_8()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

