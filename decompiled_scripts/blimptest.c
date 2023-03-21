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
	if (unk_0x260395BA7F0C83CB())
	{
		unk_0xCF33E56642B34516(500);
	}
	if (unk_0xD4BE58A7E3E102AC(18))
	{
		func_18();
	}
	unk_0x60F310C72311BCA8(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x7DCBD85F58FA8F39(255, 255, 255, 255);
		unk_0x8E0F19C19C409DDB(0.75f, 0.9f);
		unk_0xF3AAD5EF5E952D4E(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x7DCBD85F58FA8F39(255, 255, 255, 255);
		unk_0x8E0F19C19C409DDB(0.4f, 0.45f);
		unk_0xF3AAD5EF5E952D4E(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0xD4B321D9096B01FC(uLocal_40))
	{
		if ((unk_0xF4B969E0807E76C7(uLocal_40, 0) || unk_0x35D31BEBAFD53DE6(uLocal_40) <= 0) || unk_0xF524E590E8C8C6BE(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0x2956D94776C15770(uLocal_40))
			{
				unk_0x82F9D7FF967D63BE(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0xACE5E491FC1B0D37(uLocal_40, 0) };
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
		else if (unk_0x2956D94776C15770(uLocal_40))
		{
			unk_0x0FE2975B0ED2FF4F(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		unk_0xF4B969E0807E76C7(*uParam0, 0);
		if (unk_0x00123AB82C5FAC28(*uParam0) && unk_0x532AFD85DAA91F63(*uParam0, 1))
		{
			unk_0xF25956700ADFD77F(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (!unk_0x2BF5E63466422C38(*uParam0))
		{
			unk_0xDA778D908FD69EEE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xB46600A5F9F79CE8(*uParam0);
			}
			unk_0x7D81B41B134BD6F2(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xCC94EE23853F38E4(*uParam0, 0);
			}
		}
		unk_0x0FFB05DA97E810B5(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (!unk_0x00123AB82C5FAC28(*uParam0))
		{
			unk_0xE5C667CF3B4642D2(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x00123AB82C5FAC28(*uParam0) && unk_0x532AFD85DAA91F63(*uParam0, 1))
			{
				if (func_5(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), *uParam0, 0))
					{
						unk_0xF25956700ADFD77F(uParam0);
						return;
					}
				}
				unk_0xBD22862A2C5FD6DF(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), *uParam0, 0))
				{
					unk_0xF25956700ADFD77F(uParam0);
					return;
				}
			}
			unk_0xBD22862A2C5FD6DF(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (!unk_0xF4B969E0807E76C7(uParam0, 0))
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
		if (unk_0xD960230552BC4165(uParam0, 0))
		{
			if (!unk_0xCFBE5B663F1567A7(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (!unk_0xF4B969E0807E76C7(*uParam0, 0))
		{
			unk_0xDA778D908FD69EEE(*uParam0, 0, 1);
		}
		if (!unk_0x00123AB82C5FAC28(*uParam0))
		{
			unk_0xE5C667CF3B4642D2(*uParam0, 1, 0);
		}
		unk_0x4F058F27442031CC(uParam0);
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
	unk_0x8C9274F91C8D4239(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x8C9274F91C8D4239(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0x39A01A052D9B5FF0(*uParam0))
	{
		unk_0x925BD1075D119B45(*uParam0, 0);
		unk_0xAA2276003B2ADF1B(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x6EF0D5178A3B92EF(sParam2);
	unk_0xBD217E52410D1B67(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0x6BB2B1818CAE531E(iLocal_46);
	while (!unk_0x6DF9C43E3CC645BC(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0x847817A65E16621A(iLocal_46, unk_0xC12F91346EA13947(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0x3231D7D927FBC2FC(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0x0FA8183DAD2B3203()))
		{
			unk_0xB425E338F85508A5(unk_0x0FA8183DAD2B3203(), uLocal_45, -1);
			unk_0xA291E27354439AE9(0f, 1065353216);
			unk_0xB489E71A45CDC02F(0f);
			unk_0xB82DC93528F8603C(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0xE0AC40EF164A2569(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xACE5E491FC1B0D37(uParam0, 1), unk_0xACE5E491FC1B0D37(uParam1, 1), 1);
	unk_0x5A2B7C446C0CF087(uParam0, uVar0);
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
		fVar0 = unk_0x68862EAA0B66897C(fVar1, fVar2);
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
		iVar0 = unk_0xADA89D4F1A58FCBA(uParam0);
		unk_0x14C335BB2F079BD4(iVar0, iParam1);
		unk_0x6089156CDC87FE4B(iVar0, iParam2);
		unk_0xBC0D06064C5B5413(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x6BB2B1818CAE531E(iLocal_44);
	while (!unk_0x6DF9C43E3CC645BC(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x81024A420EDCE2B5(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0xCC94EE23853F38E4(uLocal_43, 1);
			unk_0x1DB66BD2267055C0(uLocal_43, 118, 0);
			unk_0x1DB66BD2267055C0(uLocal_43, 29, 0);
			unk_0x1DB66BD2267055C0(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x10DFCD426DB9FAB3(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0xE0AC40EF164A2569(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0x2956D94776C15770(uLocal_40))
	{
		unk_0x82F9D7FF967D63BE(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x6BB2B1818CAE531E(iLocal_41);
	unk_0x798362387B375EB6(1, "Blimp_City");
	while (!unk_0x6DF9C43E3CC645BC(iLocal_41) || !unk_0xDA28050D0A4CAB3A(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0x6C0EBB778989DE09(unk_0x58A029E9CCC2D140(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0x847817A65E16621A(iLocal_41, unk_0xDBD3EB1AF08AFC44(unk_0x58A029E9CCC2D140(1, "Blimp_City"), 0f), Var0.f_2, 1, 1, 0);
	unk_0xE0AC40EF164A2569(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0x2956D94776C15770(uLocal_40))
	{
		unk_0x82F9D7FF967D63BE(uLocal_40);
	}
	unk_0x497FAD093E19504A(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0xE0AC40EF164A2569(iLocal_44);
	unk_0xE0AC40EF164A2569(iLocal_41);
	unk_0xE0AC40EF164A2569(iLocal_46);
	unk_0x60F310C72311BCA8(6);
	unk_0x9C9E32388A7886A2();
}

