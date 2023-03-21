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
	if (unk_0x25BD4C26D84038CD())
	{
		unk_0xC7845898207D067F(500);
	}
	if (unk_0xBCA819F9975BEDFA(18))
	{
		func_18();
	}
	unk_0x6751FA44D6CA586D(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x95F5FAE83A0364F7(255, 255, 255, 255);
		unk_0xF52EFF0C6EF215CB(0.75f, 0.9f);
		unk_0x71D93F31C9937FC7(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x95F5FAE83A0364F7(255, 255, 255, 255);
		unk_0xF52EFF0C6EF215CB(0.4f, 0.45f);
		unk_0x71D93F31C9937FC7(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x23E9113C762466ED(uLocal_40))
	{
		if ((unk_0xA929B2923D14E2F8(uLocal_40, 0) || unk_0xB5DF060B138CD2EA(uLocal_40) <= 0) || unk_0x27CB4A87DBB58E6E(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0x72222684DEA44B9F(uLocal_40))
			{
				unk_0x394D4A83F07AE208(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0x57240623C1BC6E88(uLocal_40, 0) };
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
		else if (unk_0x72222684DEA44B9F(uLocal_40))
		{
			unk_0x1ECBE6CE58710983(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		unk_0xA929B2923D14E2F8(*uParam0, 0);
		if (unk_0xC26429B504BA534D(*uParam0) && unk_0x45CA7F42CA715849(*uParam0, 1))
		{
			unk_0x921CF98C637B0043(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (!unk_0xCA41A00932714525(*uParam0))
		{
			unk_0x4114B83B329702FF(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xFFAC04A19BFE8F03(*uParam0);
			}
			unk_0x650BB0E111420EAF(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xCC61640A821F277C(*uParam0, 0);
			}
		}
		unk_0x6500ADB01E821BC0(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (!unk_0xC26429B504BA534D(*uParam0))
		{
			unk_0xF0F77C99098F999B(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0xC26429B504BA534D(*uParam0) && unk_0x45CA7F42CA715849(*uParam0, 1))
			{
				if (func_5(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), *uParam0, 0))
					{
						unk_0x921CF98C637B0043(uParam0);
						return;
					}
				}
				unk_0x813865264334331D(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), *uParam0, 0))
				{
					unk_0x921CF98C637B0043(uParam0);
					return;
				}
			}
			unk_0x813865264334331D(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xA929B2923D14E2F8(uParam0, 0))
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
		if (unk_0x45CD66F0A131E554(uParam0, 0))
		{
			if (!unk_0x03767DFC5EE2B0C6(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (!unk_0xA929B2923D14E2F8(*uParam0, 0))
		{
			unk_0x4114B83B329702FF(*uParam0, 0);
		}
		if (!unk_0xC26429B504BA534D(*uParam0))
		{
			unk_0xF0F77C99098F999B(*uParam0, 1, 0);
		}
		unk_0x478AE709A466CB7E(uParam0);
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
	unk_0x3F46E145DB7AB5E4(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x3F46E145DB7AB5E4(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x5ACBCE67F0494242(*uParam0, 0);
		unk_0x020DF7300725ECAB(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x169EAB5A8FBE845B(sParam2);
	unk_0x30122BDF124C9221(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0xE1324F59713746FA(iLocal_46);
	while (!unk_0x9F746898F7881612(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0x692A2891A2BA7352(iLocal_46, unk_0x854ED33E6D715648(uLocal_40, 50f, 0f, 15f), 0f, 1, 1);
		unk_0x85E61E88835AE7F5(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0x17B5CC8A8615737D()))
		{
			unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), uLocal_45, -1);
			unk_0x503F20CB07C55470(0f, 1065353216);
			unk_0xBA7CD73403732191(0f);
			unk_0x1B60289D0F2A2E3C(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x924CDE68BA2ED3BA(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0x57240623C1BC6E88(uParam0, 1), unk_0x57240623C1BC6E88(uParam1, 1), 1);
	unk_0x0608D50823C6AA6D(uParam0, uVar0);
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
		fVar0 = unk_0xB318EAE363BA0C2D(fVar1, fVar2);
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
		iVar0 = unk_0xF1FE04D602EA392E(uParam0);
		unk_0xB8F5F7438C07CC5E(iVar0, iParam1);
		unk_0x84DAB725836026C6(iVar0, iParam2);
		unk_0x00EA14207118EEE2(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0xE1324F59713746FA(iLocal_44);
	while (!unk_0x9F746898F7881612(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x3FBC0964EB7878AF(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0xCC61640A821F277C(uLocal_43, 1);
			unk_0x6018E338F7ABCE75(uLocal_43, 118, 0);
			unk_0x6018E338F7ABCE75(uLocal_43, 29, 0);
			unk_0x6018E338F7ABCE75(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x9D14C436A01A0B15(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x924CDE68BA2ED3BA(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0x72222684DEA44B9F(uLocal_40))
	{
		unk_0x394D4A83F07AE208(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0xE1324F59713746FA(iLocal_41);
	unk_0xF5B59A4EB5622187(1, "Blimp_City");
	while (!unk_0x9F746898F7881612(iLocal_41) || !unk_0x63781672EC63FB83(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0xF767E67C36BCA3BB(unk_0x73E840EE8F5FADA3(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0x692A2891A2BA7352(iLocal_41, unk_0x488E5EF59AEBBF9B(unk_0x73E840EE8F5FADA3(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0x924CDE68BA2ED3BA(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0x72222684DEA44B9F(uLocal_40))
	{
		unk_0x394D4A83F07AE208(uLocal_40);
	}
	unk_0xF8E2640CE709A221(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x924CDE68BA2ED3BA(iLocal_44);
	unk_0x924CDE68BA2ED3BA(iLocal_41);
	unk_0x924CDE68BA2ED3BA(iLocal_46);
	unk_0x6751FA44D6CA586D(6);
	unk_0x921053BAF754303D();
}

