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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_40 = joaat("blimp");
	iLocal_43 = joaat("s_m_m_pilot_02");
	iLocal_45 = joaat("buzzard");
	if (unk_0xF4C685E933068D23())
	{
		unk_0x5FE2A83120E8127F(500);
	}
	if (unk_0x2C897F101BA20806(18))
	{
		func_18();
	}
	unk_0xCC68D69AF0F39112(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xB8662CE6B21E98E9(255, 255, 255, 255);
		unk_0x892A8C0426DC3D40(0.75f, 0.9f);
		unk_0x8C9F4BAAC8A43A07(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xB8662CE6B21E98E9(255, 255, 255, 255);
		unk_0x892A8C0426DC3D40(0.4f, 0.45f);
		unk_0x8C9F4BAAC8A43A07(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x538DF9E5B1DF01EB(uLocal_39))
	{
		if ((unk_0xE44A580B551C3645(uLocal_39) || unk_0x6360D2FA3AD62AD1(uLocal_39) <= 0) || unk_0x1356C15C4E3843BF(uLocal_39) <= 0f)
		{
			func_9(&uLocal_41);
			if (unk_0x6475D37A1CED9761(uLocal_39))
			{
				unk_0xE714A11BBA71908F(uLocal_39);
			}
			if (iLocal_46 == 1)
			{
				Var0 = { unk_0xBF8499F46AD9093A(uLocal_39, 0) };
				func_8(Var0);
			}
			if (iLocal_46 == 1)
			{
				func_7(&uLocal_42);
				func_4(&uLocal_39);
			}
			else
			{
				func_3(&uLocal_42, 1, 0, 1);
				func_2(&uLocal_39);
			}
		}
		else if (unk_0x6475D37A1CED9761(uLocal_39))
		{
			unk_0x33C82DBF49610FEB(uLocal_39, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		unk_0xE44A580B551C3645(*uParam0);
		if (unk_0x22349EC06EA5B08B(*uParam0) && unk_0xD8233CB95CB48A7C(*uParam0, 1))
		{
			unk_0x3A3C5A6572B3C611(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		if (!unk_0x2DE0B96E966FD817(*uParam0))
		{
			unk_0xDD56EF930C7A5863(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x2A6FA367FED380C2(*uParam0);
			}
			unk_0x2686393074E14730(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2C4E82CF88213975(*uParam0, 0);
			}
		}
		unk_0x6B3DDEE91652BE59(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(*uParam0))
		{
			unk_0x7B9576B4E099FB1F(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x22349EC06EA5B08B(*uParam0) && unk_0xD8233CB95CB48A7C(*uParam0, 1))
			{
				if (func_5(unk_0xA16EC202D9D35357()))
				{
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), *uParam0, 0))
					{
						unk_0x3A3C5A6572B3C611(uParam0);
						return;
					}
				}
				unk_0x2F2948A2506AA404(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), *uParam0, 0))
				{
					unk_0x3A3C5A6572B3C611(uParam0);
					return;
				}
			}
			unk_0x2F2948A2506AA404(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0xE44A580B551C3645(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_6(var uParam0)
{
	if (func_5(uParam0))
	{
		if (unk_0xECFECDAD51A6184F(uParam0, 0))
		{
			if (!unk_0x042EE007A41C88D4(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		if (!unk_0xE44A580B551C3645(*uParam0))
		{
			unk_0xDD56EF930C7A5863(*uParam0, 0);
		}
		if (!unk_0x22349EC06EA5B08B(*uParam0))
		{
			unk_0x7B9576B4E099FB1F(*uParam0, 1, 0);
		}
		unk_0x51A89CCC8A5317D0(uParam0);
	}
}

void func_8(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0x05F27131E22CB21A(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x05F27131E22CB21A(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0x5660C8AFDD9C1721(*uParam0))
	{
		unk_0xF1D09F0F8B016765(*uParam0, 0);
		unk_0xB6FB9702660D84F6(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xC428E1247B8480C3(sParam2);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_44);
	unk_0x939DA7EBCC6588FF(iLocal_45);
	while (!unk_0x5494F37F35C1D7D7(iLocal_45))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_39))
	{
		uLocal_44 = unk_0x9BB6F54E415071A1(iLocal_45, unk_0xA783C6007920169C(uLocal_39, 50f, 0f, 15f), 0f, 1, 1);
		unk_0xEBE442695B64536B(uLocal_44);
		func_12(uLocal_44, uLocal_39);
		if (func_5(unk_0xA16EC202D9D35357()))
		{
			unk_0x3195B1192FB0EA3D(unk_0xA16EC202D9D35357(), uLocal_44, -1);
			unk_0x60365B850FB7354F(0f, 1065353216);
			unk_0x20D6E0EA145DF751(0f);
			unk_0x84710FE7666EBF7B(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0xEA054561294AEC10(iLocal_45);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xBF8499F46AD9093A(uParam0, 1), unk_0xBF8499F46AD9093A(uParam1, 1), 1);
	unk_0x34639238667C4381(uParam0, uVar0);
}

float func_13(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xCE9082F704DCC33A(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&uLocal_41);
	if (func_6(uLocal_39))
	{
		uLocal_41 = func_15(uLocal_39, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(uParam0))
	{
		iVar0 = unk_0xDF78B7F06503567E(uParam0);
		unk_0x060629C917E581A5(iVar0, iParam1);
		unk_0x85C00B9AEF9CC0BE(iVar0, iParam2);
		unk_0xBE97A5A41C1F5C4C(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x939DA7EBCC6588FF(iLocal_43);
	while (!unk_0x5494F37F35C1D7D7(iLocal_43))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_39))
	{
		uLocal_42 = unk_0x793482A351850A4F(uLocal_39, 26, iLocal_43, -1, 1, 1);
		if (func_5(uLocal_42))
		{
			unk_0x2C4E82CF88213975(uLocal_42, 1);
			unk_0xA1478EBA54DDE31B(uLocal_42, 118, 0);
			unk_0xA1478EBA54DDE31B(uLocal_42, 29, 0);
			unk_0xA1478EBA54DDE31B(uLocal_42, 116, 0);
		}
	}
	if (func_6(uLocal_39))
	{
		unk_0x7278B2F5A4AF38A7(uLocal_39, 1, "Blimp_City", 1);
	}
	unk_0xEA054561294AEC10(iLocal_43);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_39) && unk_0x6475D37A1CED9761(uLocal_39))
	{
		unk_0xE714A11BBA71908F(uLocal_39);
	}
	func_9(&uLocal_41);
	func_7(&uLocal_42);
	func_4(&uLocal_39);
	unk_0x939DA7EBCC6588FF(iLocal_40);
	unk_0xDF529DC50AE6BC93(1, "Blimp_City");
	while (!unk_0x5494F37F35C1D7D7(iLocal_40) || !unk_0x0C73411A25059A28(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0xEA43CEA43DF286F4(unk_0x2557EE7A679BCFA9(1, "Blimp_City"), 0f) };
	uLocal_39 = unk_0x9BB6F54E415071A1(iLocal_40, unk_0xD0130651418DB758(unk_0x2557EE7A679BCFA9(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0xEA054561294AEC10(iLocal_40);
}

void func_18()
{
	if (func_6(uLocal_39) && unk_0x6475D37A1CED9761(uLocal_39))
	{
		unk_0xE714A11BBA71908F(uLocal_39);
	}
	unk_0xA0B5A2A31FD758CC(1, "Blimp_city");
	func_9(&uLocal_41);
	func_3(&uLocal_42, 1, 0, 1);
	func_2(&uLocal_39);
	func_2(&uLocal_44);
	unk_0xEA054561294AEC10(iLocal_43);
	unk_0xEA054561294AEC10(iLocal_40);
	unk_0xEA054561294AEC10(iLocal_45);
	unk_0xCC68D69AF0F39112(6);
	unk_0x82706E6C897B0FA1();
}

