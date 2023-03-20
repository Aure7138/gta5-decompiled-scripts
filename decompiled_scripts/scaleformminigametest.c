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
	uLocal_19 = unk_0xAFE7B0E5A6396BD2(100f, 100f, 30f);
	iLocal_21 = 1;
	fLocal_24 = 0f;
	fLocal_27 = 0f;
	fLocal_30 = 0f;
	fLocal_33 = 0f;
	fLocal_36 = 0f;
	fLocal_39 = 0f;
	fLocal_42 = 0f;
	fLocal_45 = 0f;
	if (unk_0xF5472C80DF2FF847())
	{
		unk_0x6A053CF596F67DF7(500);
	}
	if (unk_0xC11469DCA6FC3BB5(3))
	{
		func_2();
	}
	uLocal_17 = unk_0x67D02A194A2FC2BD("p_bubblegum");
	while (!unk_0x64BAE9BE701E6C19(uLocal_17))
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
			uLocal_18 = unk_0xE72CDBA7F0A02DD6("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x153AD457764FD704(uLocal_18))
			{
				unk_0xA47BBFFFB83D4D0A(uLocal_18, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xA924028272A61364(uLocal_18, 0.01f);
				unk_0x5E32817BF6302111(uLocal_18, 0.02f);
				unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
			}
			unk_0x74F74D3207ED525C(uLocal_19, 66);
		}
		iLocal_20 = 1;
		unk_0x029823681D10A10E(uLocal_17, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_17);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14372 == 0)
	{
		if (unk_0x2503EB2EA811EC9A(2, 189) || unk_0x2503EB2EA811EC9A(2, 190))
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
		if (unk_0xCCBB0BB9790E1F47(2, 189))
		{
			bLocal_22 = true;
			fLocal_24 = 1f;
		}
		if (unk_0x2503EB2EA811EC9A(2, 189))
		{
			bLocal_22 = true;
			fLocal_24 = 1f;
		}
		if (!unk_0x2503EB2EA811EC9A(2, 189))
		{
			bLocal_22 = false;
			fLocal_24 = 0f;
		}
		if (!bLocal_22 == bLocal_23)
		{
			bLocal_23 = bLocal_22;
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(10);
			unk_0xBC38230AD29DBDD4(fLocal_24);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0xCCBB0BB9790E1F47(2, 190))
		{
			bLocal_25 = true;
			fLocal_27 = 1f;
		}
		if (unk_0x2503EB2EA811EC9A(2, 190))
		{
			bLocal_25 = true;
			fLocal_27 = 1f;
		}
		if (!unk_0x2503EB2EA811EC9A(2, 190))
		{
			bLocal_25 = false;
			fLocal_27 = 0f;
		}
		if (!bLocal_25 == bLocal_26)
		{
			bLocal_26 = bLocal_25;
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(11);
			unk_0xBC38230AD29DBDD4(fLocal_27);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0xCCBB0BB9790E1F47(2, 188))
		{
			bLocal_28 = true;
			fLocal_30 = 1f;
		}
		if (unk_0x2503EB2EA811EC9A(2, 188))
		{
			bLocal_28 = true;
			fLocal_30 = 1f;
		}
		if (!unk_0x2503EB2EA811EC9A(2, 188))
		{
			bLocal_28 = false;
			fLocal_30 = 0f;
		}
		if (!bLocal_28 == bLocal_29)
		{
			bLocal_29 = bLocal_28;
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(8);
			unk_0xBC38230AD29DBDD4(fLocal_30);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0xCCBB0BB9790E1F47(2, 187))
		{
			bLocal_31 = true;
			fLocal_33 = 1f;
		}
		if (unk_0x2503EB2EA811EC9A(2, 187))
		{
			bLocal_31 = true;
			fLocal_33 = 1f;
		}
		if (!unk_0x2503EB2EA811EC9A(2, 187))
		{
			bLocal_31 = false;
			fLocal_33 = 0f;
		}
		if (!bLocal_31 == bLocal_32)
		{
			bLocal_32 = bLocal_31;
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(9);
			unk_0xBC38230AD29DBDD4(fLocal_33);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0xCCBB0BB9790E1F47(2, 202))
		{
			bLocal_34 = true;
			fLocal_36 = 1f;
		}
		if (unk_0x2503EB2EA811EC9A(2, 202))
		{
			bLocal_34 = true;
			fLocal_36 = 1f;
		}
		if (!unk_0x2503EB2EA811EC9A(2, 202))
		{
			bLocal_34 = false;
			fLocal_36 = 0f;
		}
		if (!bLocal_34 == bLocal_35)
		{
			bLocal_35 = bLocal_34;
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(17);
			unk_0xBC38230AD29DBDD4(fLocal_36);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0xCCBB0BB9790E1F47(2, 204))
		{
			bLocal_37 = true;
			fLocal_39 = 1f;
		}
		if (unk_0x2503EB2EA811EC9A(2, 204))
		{
			bLocal_37 = true;
			fLocal_39 = 1f;
		}
		if (!unk_0x2503EB2EA811EC9A(2, 204))
		{
			bLocal_37 = false;
			fLocal_39 = 0f;
		}
		if (!bLocal_37 == bLocal_38)
		{
			bLocal_38 = bLocal_37;
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(15);
			unk_0xBC38230AD29DBDD4(fLocal_39);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0xCCBB0BB9790E1F47(2, 201))
		{
			bLocal_40 = true;
			fLocal_42 = 1f;
		}
		if (unk_0x2503EB2EA811EC9A(2, 201))
		{
			bLocal_40 = true;
			fLocal_42 = 1f;
		}
		if (!unk_0x2503EB2EA811EC9A(2, 201))
		{
			bLocal_40 = false;
			fLocal_42 = 0f;
		}
		if (!bLocal_40 == bLocal_41)
		{
			bLocal_41 = bLocal_40;
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(16);
			unk_0xBC38230AD29DBDD4(fLocal_42);
			unk_0xD4D85E4148B638AD();
		}
		if (unk_0xCCBB0BB9790E1F47(2, 203))
		{
			bLocal_43 = true;
			fLocal_45 = 1f;
		}
		if (unk_0x2503EB2EA811EC9A(2, 203))
		{
			bLocal_43 = true;
			fLocal_45 = 1f;
		}
		if (!unk_0x2503EB2EA811EC9A(2, 203))
		{
			bLocal_43 = false;
			fLocal_45 = 0f;
		}
		if (!bLocal_43 == bLocal_44)
		{
			bLocal_44 = bLocal_43;
			unk_0xF6EA2AC68E7C7293(uParam0, "SET_INPUT_EVENT");
			unk_0xA734310215BCF528(14);
			unk_0xBC38230AD29DBDD4(fLocal_45);
			unk_0xD4D85E4148B638AD();
		}
	}
}

void func_2()
{
	if (unk_0x153AD457764FD704(uLocal_18))
	{
		unk_0x4E67E0B6D7FD5145(uLocal_18, 0);
	}
	unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0xFAEC088D28B1DE4A(0);
	unk_0x0BFC2C61FB5B6CA1(1);
	unk_0x6215C0F9FFF76BAD(&uLocal_17);
	unk_0x5E8B6D17FF91CD59();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xF73FBE4845C43B5B(&Global_2264, 16);
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
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
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
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
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

