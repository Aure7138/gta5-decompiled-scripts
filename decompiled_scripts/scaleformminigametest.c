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
	uLocal_20 = unk_0x9EDB165CAADCAB2C(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0xF4EE9D6C8E60AE22())
	{
		unk_0x9B0467159FAB9F56(500);
	}
	if (unk_0x78BF2001491914AC(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x4D6D22510A2467D9("p_bubblegum");
	while (!unk_0xA8AF99BD8D81CFB7(uLocal_18))
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
			uLocal_19 = unk_0x1FF428E592B6F928("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x9FA769EB6C3BCCE4(uLocal_19))
			{
				unk_0xF3FE3F0E2BC462D7(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xF2BFE39E75151F25(uLocal_19, 0.01f);
				unk_0xDD277A3BED4D439E(uLocal_19, 0.02f);
				unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 0, 0);
			}
			unk_0x9FD1808EF916E312(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0xED8A6509C85CF7A1(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14422 == 0)
	{
		if (unk_0x83F6A1E4E653AD75(2, 189) || unk_0x83F6A1E4E653AD75(2, 190))
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
		if (unk_0x92BC4A8239BDDACC(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x83F6A1E4E653AD75(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x83F6A1E4E653AD75(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0xD1FCC52F87A98873(uParam0, "SET_INPUT_EVENT");
			unk_0x4CECF13AF144A8F6(10);
			unk_0xD3A4A11E4FDC9D63(fLocal_25);
			unk_0x8123397DC676E794();
		}
		if (unk_0x92BC4A8239BDDACC(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x83F6A1E4E653AD75(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x83F6A1E4E653AD75(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0xD1FCC52F87A98873(uParam0, "SET_INPUT_EVENT");
			unk_0x4CECF13AF144A8F6(11);
			unk_0xD3A4A11E4FDC9D63(fLocal_28);
			unk_0x8123397DC676E794();
		}
		if (unk_0x92BC4A8239BDDACC(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x83F6A1E4E653AD75(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x83F6A1E4E653AD75(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0xD1FCC52F87A98873(uParam0, "SET_INPUT_EVENT");
			unk_0x4CECF13AF144A8F6(8);
			unk_0xD3A4A11E4FDC9D63(fLocal_31);
			unk_0x8123397DC676E794();
		}
		if (unk_0x92BC4A8239BDDACC(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x83F6A1E4E653AD75(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x83F6A1E4E653AD75(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0xD1FCC52F87A98873(uParam0, "SET_INPUT_EVENT");
			unk_0x4CECF13AF144A8F6(9);
			unk_0xD3A4A11E4FDC9D63(fLocal_34);
			unk_0x8123397DC676E794();
		}
		if (unk_0x92BC4A8239BDDACC(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x83F6A1E4E653AD75(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x83F6A1E4E653AD75(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0xD1FCC52F87A98873(uParam0, "SET_INPUT_EVENT");
			unk_0x4CECF13AF144A8F6(17);
			unk_0xD3A4A11E4FDC9D63(fLocal_37);
			unk_0x8123397DC676E794();
		}
		if (unk_0x92BC4A8239BDDACC(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x83F6A1E4E653AD75(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x83F6A1E4E653AD75(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0xD1FCC52F87A98873(uParam0, "SET_INPUT_EVENT");
			unk_0x4CECF13AF144A8F6(15);
			unk_0xD3A4A11E4FDC9D63(fLocal_40);
			unk_0x8123397DC676E794();
		}
		if (unk_0x92BC4A8239BDDACC(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x83F6A1E4E653AD75(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x83F6A1E4E653AD75(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0xD1FCC52F87A98873(uParam0, "SET_INPUT_EVENT");
			unk_0x4CECF13AF144A8F6(16);
			unk_0xD3A4A11E4FDC9D63(fLocal_43);
			unk_0x8123397DC676E794();
		}
		if (unk_0x92BC4A8239BDDACC(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x83F6A1E4E653AD75(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x83F6A1E4E653AD75(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0xD1FCC52F87A98873(uParam0, "SET_INPUT_EVENT");
			unk_0x4CECF13AF144A8F6(14);
			unk_0xD3A4A11E4FDC9D63(fLocal_46);
			unk_0x8123397DC676E794();
		}
	}
}

void func_2()
{
	if (unk_0x9FA769EB6C3BCCE4(uLocal_19))
	{
		unk_0x1E2E6AAAD9AE1286(uLocal_19, 0);
	}
	unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0x8850034223654421(0);
	unk_0x7D53B6FFAEDA810A(1);
	unk_0x73F5E7B6BB964839(&uLocal_18);
	unk_0xA232817B0B36F2E5();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xF6082E2ADA1C795B(&Global_2314, 16);
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
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
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
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
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

