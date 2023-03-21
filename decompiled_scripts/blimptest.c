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
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0x8359CF51370FC969(500);
	}
	if (unk_0x76BF814AB8D4CAB8(18))
	{
		func_18();
	}
	unk_0x945880A1F9FE9E4F(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xE14EBFD640A207D8(255, 255, 255, 255);
		unk_0x61EA61920DAA51B8(0.75f, 0.9f);
		unk_0x36D27769309D1050(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xE14EBFD640A207D8(255, 255, 255, 255);
		unk_0x61EA61920DAA51B8(0.4f, 0.45f);
		unk_0x36D27769309D1050(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x31F12808DC47A9E5(uLocal_40))
	{
		if ((unk_0x74C2FE037DFC8B4A(uLocal_40, 0) || unk_0x0A088F357EF627CA(uLocal_40) <= 0) || unk_0x5719E0F2FB0A1A07(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0xCD9EC66924076C1B(uLocal_40))
			{
				unk_0xF2106D7D1A77DBA8(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0x761660F5CE986DC4(uLocal_40, 0) };
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
		else if (unk_0xCD9EC66924076C1B(uLocal_40))
		{
			unk_0x157DAF86FA806735(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		unk_0x74C2FE037DFC8B4A(*uParam0, 0);
		if (unk_0x90D1FDC9D31B7BE1(*uParam0) && unk_0xE54DCC6B21FDC95A(*uParam0, 1))
		{
			unk_0x4F5FF3F3FDCAB15D(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x0FAE113CE72ED842(*uParam0))
		{
			unk_0x503DF1366BC3493D(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x1436BC29BF45FBAE(*uParam0);
			}
			unk_0x10F31830C95ED2E5(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x40E2910BAF39B1C7(*uParam0, 0);
			}
		}
		unk_0xDBE64C5761554FBF(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(*uParam0))
		{
			unk_0x337F2213526139E0(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x90D1FDC9D31B7BE1(*uParam0) && unk_0xE54DCC6B21FDC95A(*uParam0, 1))
			{
				if (func_5(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), *uParam0, 0))
					{
						unk_0x4F5FF3F3FDCAB15D(uParam0);
						return;
					}
				}
				unk_0xBECECD970F645217(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), *uParam0, 0))
				{
					unk_0x4F5FF3F3FDCAB15D(uParam0);
					return;
				}
			}
			unk_0xBECECD970F645217(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
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
		if (unk_0xC4B84EB67F78C1F0(uParam0, 0))
		{
			if (!unk_0x25A40FAC128F45B0(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(*uParam0, 0))
		{
			unk_0x503DF1366BC3493D(*uParam0, 0, 1);
		}
		if (!unk_0x90D1FDC9D31B7BE1(*uParam0))
		{
			unk_0x337F2213526139E0(*uParam0, 1, 0);
		}
		unk_0x63C116C2153FAA3C(uParam0);
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
	unk_0x77DDCE1212FC2C77(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x77DDCE1212FC2C77(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(*uParam0))
	{
		unk_0x63EECA6600F1090E(*uParam0, 0);
		unk_0x40D517D991458154(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0x5D7608D88BED248F(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0x9016574B77A748EE(iLocal_46);
	while (!unk_0xEDFE27D1AEA0EA7F(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0x3064CCF56C6C32BC(iLocal_46, unk_0x0AF3D0AB54EA2104(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0xBCB52670CAA2819B(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0x8D77EFA08616AD64(unk_0x18F7BE9ACB7D08F4(), uLocal_45, -1);
			unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
			unk_0xA3F41A1968319181(0f);
			unk_0x7EE425AE3317BA69(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x419C9117019F2E5A(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0x761660F5CE986DC4(uParam0, 1), unk_0x761660F5CE986DC4(uParam1, 1), 1);
	unk_0xB88121FF8A34A66F(uParam0, uVar0);
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
		fVar0 = unk_0xE3269852A87D46D2(fVar1, fVar2);
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
		iVar0 = unk_0xA8EDC17CEEA40DFA(uParam0);
		unk_0x1DF6703E5077ABE1(iVar0, iParam1);
		unk_0xF60CEE5003674AF0(iVar0, iParam2);
		unk_0x0590222010A36CE4(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x9016574B77A748EE(iLocal_44);
	while (!unk_0xEDFE27D1AEA0EA7F(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0xC52E83A4C0F88DAB(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0x40E2910BAF39B1C7(uLocal_43, 1);
			unk_0x764AFC5A3A16C2B0(uLocal_43, 118, 0);
			unk_0x764AFC5A3A16C2B0(uLocal_43, 29, 0);
			unk_0x764AFC5A3A16C2B0(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0xF81720737A9C0B6E(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x419C9117019F2E5A(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0xCD9EC66924076C1B(uLocal_40))
	{
		unk_0xF2106D7D1A77DBA8(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x9016574B77A748EE(iLocal_41);
	unk_0xAE5F484E08487A0F(1, "Blimp_City");
	while (!unk_0xEDFE27D1AEA0EA7F(iLocal_41) || !unk_0x53500A7D168BF5F6(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0xC06A991DF18827EA(unk_0x267E17A905064537(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0x3064CCF56C6C32BC(iLocal_41, unk_0x55175E7A23AE97E0(unk_0x267E17A905064537(1, "Blimp_City"), 0f), Var0.f_2, 1, 1, 0);
	unk_0x419C9117019F2E5A(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0xCD9EC66924076C1B(uLocal_40))
	{
		unk_0xF2106D7D1A77DBA8(uLocal_40);
	}
	unk_0xFD32699B58C2E7EF(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x419C9117019F2E5A(iLocal_44);
	unk_0x419C9117019F2E5A(iLocal_41);
	unk_0x419C9117019F2E5A(iLocal_46);
	unk_0x945880A1F9FE9E4F(6);
	unk_0x810C5D6462DD69E6();
}

