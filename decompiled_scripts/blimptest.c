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
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
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
	iLocal_39 = joaat("blimp");
	iLocal_42 = joaat("s_m_m_pilot_02");
	iLocal_44 = joaat("buzzard");
	if (unk_0xC2C705ED6124A7C2())
	{
		unk_0x662E87A876F1069D(500);
	}
	if (unk_0x7547D7CF93115D6D(18))
	{
		func_18();
	}
	unk_0x53C0659721DC11EC(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xAF24EA89F4EF8594(255, 255, 255, 255);
		unk_0x8F290D3FB4225BC6(0.75f, 0.9f);
		unk_0xD49409263C7DA1DD(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xAF24EA89F4EF8594(255, 255, 255, 255);
		unk_0x8F290D3FB4225BC6(0.4f, 0.45f);
		unk_0xD49409263C7DA1DD(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0xFD68187442384158(uLocal_38))
	{
		if ((unk_0xE5D56342B0FF1D0D(uLocal_38) || unk_0x5D422B4764FA2ACA(uLocal_38) <= 0) || unk_0xBA2FAB683F225FF0(uLocal_38) <= 0f)
		{
			func_9(&uLocal_40);
			if (unk_0x8B3A54875054E60A(uLocal_38))
			{
				unk_0xA4DCD8636424FF17(uLocal_38);
			}
			if (iLocal_45 == 1)
			{
				Var0 = { unk_0xBF1B13057E5119A4(uLocal_38, 0) };
				func_8(Var0);
			}
			if (iLocal_45 == 1)
			{
				func_7(&uLocal_41);
				func_4(&uLocal_38);
			}
			else
			{
				func_3(&uLocal_41, 1, 0, 1);
				func_2(&uLocal_38);
			}
		}
		else if (unk_0x8B3A54875054E60A(uLocal_38))
		{
			unk_0xD5432BD2F44E464F(uLocal_38, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		unk_0xE5D56342B0FF1D0D(*uParam0);
		if (unk_0x73E2404DC70203CD(*uParam0) && unk_0x51BC2FF711F8CF71(*uParam0, 1))
		{
			unk_0xB67623A401171555(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(*uParam0))
		{
			unk_0x3C2614E45AB2F499(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x1E61DAA6A0EEC652(*uParam0);
			}
			unk_0xA1E4BA3B17C6D931(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2DC5B31EBB810396(*uParam0, 0);
			}
		}
		unk_0xCA4DD92F1F2931F3(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x73E2404DC70203CD(*uParam0))
		{
			unk_0xBAE5DF507EEC53C8(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x73E2404DC70203CD(*uParam0) && unk_0x51BC2FF711F8CF71(*uParam0, 1))
			{
				if (func_5(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), *uParam0, 0))
					{
						unk_0xB67623A401171555(uParam0);
						return;
					}
				}
				unk_0x10EA498723DC5A09(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), *uParam0, 0))
				{
					unk_0xB67623A401171555(uParam0);
					return;
				}
			}
			unk_0x10EA498723DC5A09(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(uParam0))
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
		if (unk_0xCA8794CE207FC6D5(uParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(*uParam0))
		{
			unk_0x3C2614E45AB2F499(*uParam0, 0);
		}
		if (!unk_0x73E2404DC70203CD(*uParam0))
		{
			unk_0xBAE5DF507EEC53C8(*uParam0, 1, 0);
		}
		unk_0x8019BB3BA236A900(uParam0);
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
	unk_0x593E9069AA8CC707(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x593E9069AA8CC707(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xD361727124133DF3(*uParam0))
	{
		unk_0x43F7D508C655CBA3(*uParam0, 0);
		unk_0xA0A65B537B1F11EC(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x55B01783B33A78F6(sParam2);
	unk_0x268B3979E044050D(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_43);
	unk_0xCBE6AC5010E5CE5C(iLocal_44);
	while (!unk_0xD291857D0C9C7FEC(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_38))
	{
		uLocal_43 = unk_0x546974B676313326(iLocal_44, unk_0x0CAFB9D38494283D(uLocal_38, 50f, 0f, 15f), 0f, 1, 1);
		unk_0x1AFF0858378FA21B(uLocal_43);
		func_12(uLocal_43, uLocal_38);
		if (func_5(unk_0x507DA4994C3D8EBD()))
		{
			unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), uLocal_43, -1);
			unk_0x77CB1AAAF31275BE(0f, 1065353216);
			unk_0xBE5E0E5A454F4D6A(0f);
			unk_0x4BCBC9058A5CECE1(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0xFF467904A8A12BBE(iLocal_44);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xBF1B13057E5119A4(uParam0, 1), unk_0xBF1B13057E5119A4(uParam1, 1), 1);
	unk_0x248DC16118AE5035(uParam0, uVar0);
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
		fVar0 = unk_0x1E7EBED5BB2C078C(fVar1, fVar2);
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
	func_9(&uLocal_40);
	if (func_6(uLocal_38))
	{
		uLocal_40 = func_15(uLocal_38, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(uParam0))
	{
		iVar0 = unk_0xB6F075D13B917FBE(uParam0);
		unk_0x109908E4511B0839(iVar0, iParam1);
		unk_0xAE9EE75C62A1DACD(iVar0, iParam2);
		unk_0x1D8833C0F155BFE7(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0xCBE6AC5010E5CE5C(iLocal_42);
	while (!unk_0xD291857D0C9C7FEC(iLocal_42))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_38))
	{
		uLocal_41 = unk_0xC68FBD37098CE438(uLocal_38, 26, iLocal_42, -1, 1, 1);
		if (func_5(uLocal_41))
		{
			unk_0x2DC5B31EBB810396(uLocal_41, 1);
			unk_0x7FEDD088E489CE41(uLocal_41, 118, 0);
			unk_0x7FEDD088E489CE41(uLocal_41, 29, 0);
			unk_0x7FEDD088E489CE41(uLocal_41, 116, 0);
		}
	}
	if (func_6(uLocal_38))
	{
		unk_0xFB79A537A7D76B64(uLocal_38, 1, "Blimp_City", 1);
	}
	unk_0xFF467904A8A12BBE(iLocal_42);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_38) && unk_0x8B3A54875054E60A(uLocal_38))
	{
		unk_0xA4DCD8636424FF17(uLocal_38);
	}
	func_9(&uLocal_40);
	func_7(&uLocal_41);
	func_4(&uLocal_38);
	unk_0xCBE6AC5010E5CE5C(iLocal_39);
	unk_0x27859D80F345E855(1, "Blimp_City");
	while (!unk_0xD291857D0C9C7FEC(iLocal_39) || !unk_0xD3536FF14115DA03(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0x85B367BF256E3700(unk_0xEE6ADE60E5ABC4DE(1, "Blimp_City"), 0f) };
	uLocal_38 = unk_0x546974B676313326(iLocal_39, unk_0xBFB3058750DE68FA(unk_0xEE6ADE60E5ABC4DE(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0xFF467904A8A12BBE(iLocal_39);
}

void func_18()
{
	if (func_6(uLocal_38) && unk_0x8B3A54875054E60A(uLocal_38))
	{
		unk_0xA4DCD8636424FF17(uLocal_38);
	}
	unk_0x6F50999A7C4DD6A2(1, "Blimp_city");
	func_9(&uLocal_40);
	func_3(&uLocal_41, 1, 0, 1);
	func_2(&uLocal_38);
	func_2(&uLocal_43);
	unk_0xFF467904A8A12BBE(iLocal_42);
	unk_0xFF467904A8A12BBE(iLocal_39);
	unk_0xFF467904A8A12BBE(iLocal_44);
	unk_0x53C0659721DC11EC(6);
	unk_0x883793591E631A3B();
}

