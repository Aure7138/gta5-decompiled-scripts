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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (unk_0x2CC731F9E664299E())
	{
		unk_0xCA6D671341405469(500);
	}
	if (unk_0x4B4BD87E3D30C50D(18))
	{
		func_18();
	}
	unk_0xCBC9707F3BE3D5C2(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x3F570C434DAE03B3(255, 255, 255, 255);
		unk_0x812DA59718C7CF24(0.75f, 0.9f);
		unk_0x1A1C41FB33FB4759(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x3F570C434DAE03B3(255, 255, 255, 255);
		unk_0x812DA59718C7CF24(0.4f, 0.45f);
		unk_0x1A1C41FB33FB4759(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x1F2158D615BC4B25(uLocal_40))
	{
		if ((unk_0x0B6E83A9A7ED3EBA(uLocal_40) || unk_0x070BBD7287E8E744(uLocal_40) <= 0) || unk_0xA7099FB567A1830C(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0x599C956FC6B86D98(uLocal_40))
			{
				unk_0x3DC2DA662E9FC742(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0xAF99169F0F5AE41D(uLocal_40, 0) };
				func_8(Var0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&uLocal_43);
				func_4(&uLocal_40);
			}
			else
			{
				func_3(&uLocal_43, 1, 0, 1);
				func_2(&uLocal_40);
			}
		}
		else if (unk_0x599C956FC6B86D98(uLocal_40))
		{
			unk_0x88DF2008E7C54A31(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		unk_0x0B6E83A9A7ED3EBA(*uParam0);
		if (unk_0x335346A332B62CA2(*uParam0) && unk_0x95CBA891BCA778AA(*uParam0, 1))
		{
			unk_0xB84D4C251623B60C(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (!unk_0x1E80C02AC16B6622(*uParam0))
		{
			unk_0xA09672E91FA74DCA(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x5A499E160A1878DC(*uParam0);
			}
			unk_0x112CD899A3BEE719(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x9526D9575C237F2F(*uParam0, 0);
			}
		}
		unk_0xA29D53AF339F4CD0(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (!unk_0x335346A332B62CA2(*uParam0))
		{
			unk_0x8D429A827A931AC9(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x335346A332B62CA2(*uParam0) && unk_0x95CBA891BCA778AA(*uParam0, 1))
			{
				if (func_5(unk_0x77F050A399DB77ED()))
				{
					if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), *uParam0, 0))
					{
						unk_0xB84D4C251623B60C(uParam0);
						return;
					}
				}
				unk_0x18D40A0CF27AD6D3(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x77F050A399DB77ED()))
			{
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), *uParam0, 0))
				{
					unk_0xB84D4C251623B60C(uParam0);
					return;
				}
			}
			unk_0x18D40A0CF27AD6D3(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uParam0))
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
		if (unk_0x968EA16107097324(uParam0, 0))
		{
			if (!unk_0x01CB02EE3F3F9481(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(*uParam0))
		{
			unk_0xA09672E91FA74DCA(*uParam0, 0);
		}
		if (!unk_0x335346A332B62CA2(*uParam0))
		{
			unk_0x8D429A827A931AC9(*uParam0, 1, 0);
		}
		unk_0xAB3098579170FA46(uParam0);
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
	unk_0x07D23E339400A882(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x07D23E339400A882(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xC3B073777B46C61A(*uParam0))
	{
		unk_0x49AFDB1662AE2A92(*uParam0, 0);
		unk_0x296CDA10C549A502(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x978803CE12B5FCBA(sParam2);
	unk_0x1AC4FC30A9B7577A(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0xC60576ADD1AECA45(iLocal_46);
	while (!unk_0x4A4B6FD54C499B7D(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0x2EEA15C0C12C8CDE(iLocal_46, unk_0x03C14E8A9400F2A9(uLocal_40, 50f, 0f, 15f), 0f, 1, 1);
		unk_0xF64A156FECDD2685(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0x77F050A399DB77ED()))
		{
			unk_0x213DEA03167527BC(unk_0x77F050A399DB77ED(), uLocal_45, -1);
			unk_0xABF261CA61470DE0(0f, 1065353216);
			unk_0x8793DE27084C2CBD(0f);
			unk_0x0BA5964C07973FE9(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0xFB4F6722A032A0F0(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xAF99169F0F5AE41D(uParam0, 1), unk_0xAF99169F0F5AE41D(uParam1, 1), 1);
	unk_0x2DA164E80FDEE7F2(uParam0, uVar0);
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
		fVar0 = unk_0x14716E83ED712140(fVar1, fVar2);
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
	func_9(&uLocal_42);
	if (func_6(uLocal_40))
	{
		uLocal_42 = func_15(uLocal_40, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(uParam0))
	{
		iVar0 = unk_0xBAA49E1DC5584B87(uParam0);
		unk_0x0AA0CF6371DDEDCF(iVar0, iParam1);
		unk_0x18EA864BF4963320(iVar0, iParam2);
		unk_0x61CD4A0BA23CE782(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0xC60576ADD1AECA45(iLocal_44);
	while (!unk_0x4A4B6FD54C499B7D(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x73B8FD017061F240(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0x9526D9575C237F2F(uLocal_43, 1);
			unk_0x1706625EBCDDEBF9(uLocal_43, 118, 0);
			unk_0x1706625EBCDDEBF9(uLocal_43, 29, 0);
			unk_0x1706625EBCDDEBF9(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0xDE98CA2972011464(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0xFB4F6722A032A0F0(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0x599C956FC6B86D98(uLocal_40))
	{
		unk_0x3DC2DA662E9FC742(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0xC60576ADD1AECA45(iLocal_41);
	unk_0xE3E5A6B56C247E86(1, "Blimp_City");
	while (!unk_0x4A4B6FD54C499B7D(iLocal_41) || !unk_0xEF797B6DFFA2C629(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0xD38E2F286242E391(unk_0xE363339DD4256B85(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0x2EEA15C0C12C8CDE(iLocal_41, unk_0xD7519337F86C271B(unk_0xE363339DD4256B85(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0xFB4F6722A032A0F0(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0x599C956FC6B86D98(uLocal_40))
	{
		unk_0x3DC2DA662E9FC742(uLocal_40);
	}
	unk_0xD6BB36F97A54533F(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0xFB4F6722A032A0F0(iLocal_44);
	unk_0xFB4F6722A032A0F0(iLocal_41);
	unk_0xFB4F6722A032A0F0(iLocal_46);
	unk_0xCBC9707F3BE3D5C2(6);
	unk_0x2F798BA2098FDADE();
}

