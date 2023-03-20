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
	if (unk_0x2C22E7D1C80A53EF())
	{
		unk_0xA0303A6B8C99DD6A(500);
	}
	if (unk_0x2EC83C7ACA23E8A4(18))
	{
		func_18();
	}
	unk_0xCF03D9C8A7F1577C(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xDEB22FE9E351379F(255, 255, 255, 255);
		unk_0xBF14E70921AA4E54(0.75f, 0.9f);
		unk_0x366FF85701018BC1(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xDEB22FE9E351379F(255, 255, 255, 255);
		unk_0xBF14E70921AA4E54(0.4f, 0.45f);
		unk_0x366FF85701018BC1(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0xD3FACCDA4D66AEAD(uLocal_40))
	{
		if ((unk_0x912AD5A10E7633F0(uLocal_40, 0) || unk_0xC6FE0F623405BFA8(uLocal_40) <= 0) || unk_0x34898726CD7A292C(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0xC8FF9EAEF62B118C(uLocal_40))
			{
				unk_0x26B9AD2BE477CF10(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0xC59DF10B4FC39DF8(uLocal_40, 0) };
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
		else if (unk_0xC8FF9EAEF62B118C(uLocal_40))
		{
			unk_0x4DBE639635E416EA(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		unk_0x912AD5A10E7633F0(*uParam0, 0);
		if (unk_0x18C670321BC98FDA(*uParam0) && unk_0x687CB62D355FD7FD(*uParam0, 1))
		{
			unk_0x615DE34FC732CF11(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if (!unk_0xEB361B4BD195A4D3(*uParam0))
		{
			unk_0xEDA527A4943E849D(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEB6B0D85F7D79F78(*uParam0);
			}
			unk_0x77637031DE326F70(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xFF5CE2ECB4FBD4A8(*uParam0, 0);
			}
		}
		unk_0x0689C659BF2D3BF7(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if (!unk_0x18C670321BC98FDA(*uParam0))
		{
			unk_0x7B17650F15A8876D(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x18C670321BC98FDA(*uParam0) && unk_0x687CB62D355FD7FD(*uParam0, 1))
			{
				if (func_5(unk_0xA0081090911D13E5()))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), *uParam0, 0))
					{
						unk_0x615DE34FC732CF11(uParam0);
						return;
					}
				}
				unk_0xEFA1F34A28EE763C(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0xA0081090911D13E5()))
			{
				if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), *uParam0, 0))
				{
					unk_0x615DE34FC732CF11(uParam0);
					return;
				}
			}
			unk_0xEFA1F34A28EE763C(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x912AD5A10E7633F0(uParam0, 0))
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
		if (unk_0x1F1B2B6E500380C5(uParam0, 0))
		{
			if (!unk_0x601CCD1205C6523F(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if (!unk_0x912AD5A10E7633F0(*uParam0, 0))
		{
			unk_0xEDA527A4943E849D(*uParam0, 0);
		}
		if (!unk_0x18C670321BC98FDA(*uParam0))
		{
			unk_0x7B17650F15A8876D(*uParam0, 1, 0);
		}
		unk_0x4E82D83B086B5C93(uParam0);
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
	unk_0x7AA0DACDC0A1EDA3(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x7AA0DACDC0A1EDA3(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		unk_0x71E206F83114C3D2(*uParam0, 0);
		unk_0x0B57C567D698C373(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0x491067A8E906F22D(iLocal_46);
	while (!unk_0x2C1B5A0D3E233FC3(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0xE044C77D0FC9DB66(iLocal_46, unk_0x2E01486DB8218E16(uLocal_40, 50f, 0f, 15f), 0f, 1, 1);
		unk_0xE88D5F6F072B64A7(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0xA0081090911D13E5()))
		{
			unk_0xC7E3E32FBCC0DCD6(unk_0xA0081090911D13E5(), uLocal_45, -1);
			unk_0x2A7D387AD73F1D15(0f, 1065353216);
			unk_0x8BDD755F07063522(0f);
			unk_0x0B17BC5D018E224B(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x2C07692AA3545079(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xC59DF10B4FC39DF8(uParam0, 1), unk_0xC59DF10B4FC39DF8(uParam1, 1), 1);
	unk_0x10BB9EA2ADBCF0F3(uParam0, uVar0);
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
		fVar0 = unk_0xD3392FFC0C6A404A(fVar1, fVar2);
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
		iVar0 = unk_0x91B4D18C6AFDC14C(uParam0);
		unk_0x47C16DAEBDB1E5FD(iVar0, iParam1);
		unk_0x420759DE4A6A9555(iVar0, iParam2);
		unk_0xC40118229E47A3D7(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x491067A8E906F22D(iLocal_44);
	while (!unk_0x2C1B5A0D3E233FC3(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x667A2CFA1914073C(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0xFF5CE2ECB4FBD4A8(uLocal_43, 1);
			unk_0x705E4255B39314A7(uLocal_43, 118, 0);
			unk_0x705E4255B39314A7(uLocal_43, 29, 0);
			unk_0x705E4255B39314A7(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x8466AAF2AE57F1B9(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x2C07692AA3545079(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0xC8FF9EAEF62B118C(uLocal_40))
	{
		unk_0x26B9AD2BE477CF10(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x491067A8E906F22D(iLocal_41);
	unk_0x77051FBD916D3170(1, "Blimp_City");
	while (!unk_0x2C1B5A0D3E233FC3(iLocal_41) || !unk_0x48B13379A3313D29(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0x3330433AFECAC4C0(unk_0xC47221AEE3FE706F(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0xE044C77D0FC9DB66(iLocal_41, unk_0xC1BCCA8FE6DF9F3F(unk_0xC47221AEE3FE706F(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0x2C07692AA3545079(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0xC8FF9EAEF62B118C(uLocal_40))
	{
		unk_0x26B9AD2BE477CF10(uLocal_40);
	}
	unk_0x11DDC8BDE5CBDCB5(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x2C07692AA3545079(iLocal_44);
	unk_0x2C07692AA3545079(iLocal_41);
	unk_0x2C07692AA3545079(iLocal_46);
	unk_0xCF03D9C8A7F1577C(6);
	unk_0x78C587487CD40B92();
}

