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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_47 = { ScriptParam_0.f_1[0 /*3*/] };
	iLocal_44 = unk_0x61E9B3BFA06B017B(0, 2);
	func_27();
	if (unk_0x76BF814AB8D4CAB8(11))
	{
		func_27();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x6E65FD9B611945AD())
		{
			if (func_8(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_45 == 1)
						{
							iLocal_43 = 1;
						}
						else
						{
							func_7();
						}
						break;
					
					case 1:
						if (!unk_0x74C2FE037DFC8B4A(iLocal_54, 0))
						{
							if (iLocal_46 == 0)
							{
								if (func_2(iLocal_54, 0, 1056964608, 0, 0, 0))
								{
									iLocal_46 = 1;
								}
							}
						}
						if (iLocal_56 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				func_27();
			}
		}
		else
		{
			func_27();
		}
	}
}

void func_1()
{
	if (unk_0xC9D9444186B5A374() > 10000)
	{
		if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_47, 10f, 10f, 10f, 0, 1, 0) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0x5AE11BC36633DE4E(0);
			if (!unk_0x74C2FE037DFC8B4A(iLocal_54, 0))
			{
				if (iLocal_44 == 0)
				{
					if (iLocal_46 == 0)
					{
					}
					unk_0xC8BEB049F3BFC0AB(&uLocal_57);
					unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
					unk_0xB5746603774C4C9D(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xAFDA7B8F83B2CA58(uLocal_57);
					unk_0x73F69DD57B7E92A9(iLocal_54, uLocal_57);
					unk_0x56C7B20E11B37066(&uLocal_57);
				}
				else if (!unk_0x74C2FE037DFC8B4A(uLocal_55, 0))
				{
					unk_0x8F467CFC5FBBCE77(iLocal_54, iLocal_55, 0);
					if (iLocal_46 == 0)
					{
					}
					unk_0x1A564F5D3F5B4476(iLocal_55, 1193033728, 0);
					iLocal_44 = 0;
				}
			}
		}
	}
}

int func_2(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	float fVar0;
	
	if (iParam4 == 2)
	{
		fVar0 = 150f;
	}
	else if (iParam4 == 1)
	{
		fVar0 = 100f;
	}
	else if (iParam4 == 0)
	{
		fVar0 = 40f;
	}
	switch (iParam3)
	{
		case 2:
			if (func_3(uParam0, func_6(iParam1, 2, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 3, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 5, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 6, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 7, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 8, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 1:
			if (func_3(uParam0, func_6(iParam1, 1, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 0:
			if (func_3(uParam0, func_6(iParam1, 0, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_3(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6)
{
	float fVar0;
	struct<3> Var1;
	
	if (fParam5 < 1f)
	{
		fVar0 = (1f + 0.5f);
	}
	else
	{
		fVar0 = (fParam5 + 0.5f);
	}
	Var1 = { (fParam5 + 0.2f), (fParam5 + 0.2f), fVar0 };
	if (!unk_0x0FAE113CE72ED842(uParam0))
	{
		if ((((unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), unk_0x0AF3D0AB54EA2104(uParam0, Param1), Var1, 0, 1, 0) && unk_0xDC43CD42234DF8D3(unk_0x18F7BE9ACB7D08F4(), unk_0x761660F5CE986DC4(uParam0, 1), fParam4)) && func_5(bParam6)) && !unk_0x0B90D19A63676F41(uParam0)) && !unk_0xE8BE423677E08365(uParam0))
		{
			func_4(uParam0, 1);
			return 1;
		}
		else
		{
			func_4(uParam0, 0);
		}
	}
	return 0;
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
	}
}

int func_5(bool bParam0)
{
	if (unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
	{
		if (bParam0)
		{
			if (unk_0xC3B6FA61D67F5BDD(unk_0x18F7BE9ACB7D08F4()) == 1f || unk_0xC3B6FA61D67F5BDD(unk_0x18F7BE9ACB7D08F4()) == 0f)
			{
				return 1;
			}
		}
		else if (unk_0xC3B6FA61D67F5BDD(unk_0x18F7BE9ACB7D08F4()) == 1f)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_6(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 1:
			if (iParam0 == 3)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 2:
			if (iParam0 == 2)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 3:
			if (iParam0 == 1)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 5:
			if (iParam0 == 1)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 7:
			if (iParam0 == 3)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 8:
			if (iParam0 == 2)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
	}
	if (fParam2 < 0f)
	{
		fParam2 = (fParam2 * -1f);
	}
	return Var0;
}

void func_7()
{
	if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_47, 50f, 50f, 50f, 0, 1, 0))
	{
		unk_0x9016574B77A748EE(joaat("a_m_o_tramp_01"));
		unk_0x9016574B77A748EE(joaat("g_m_y_strpunk_01"));
		unk_0x831CD0FBFB26EC7E("amb@drug_dealer");
		while ((!unk_0xEDFE27D1AEA0EA7F(joaat("a_m_o_tramp_01")) || !unk_0xEDFE27D1AEA0EA7F(joaat("g_m_y_strpunk_01"))) || !unk_0x028356968FDD2DF2("amb@drug_dealer"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x48E76A4B7B58B77A("homeless", &uLocal_53);
		Local_50.f_2 = (Local_47.f_2 - 1f);
		iLocal_54 = unk_0x364B87C5C64BD100(19, joaat("a_m_o_tramp_01"), Local_47.f_0, Local_47.f_1, Local_50.f_2, 0f, 1, 1);
		unk_0x641E77554763EF06(iLocal_54, uLocal_53);
		if (iLocal_44 == 1)
		{
			Local_50 = { unk_0x0AF3D0AB54EA2104(iLocal_54, 0.8f, 0.8f, -1f) };
			iLocal_55 = unk_0x364B87C5C64BD100(5, joaat("g_m_y_strpunk_01"), Local_50, 0f, 1, 1);
			unk_0x48E76A4B7B58B77A("homeless", &uLocal_53);
			unk_0x641E77554763EF06(iLocal_55, uLocal_53);
			if (!unk_0x74C2FE037DFC8B4A(iLocal_54, 0))
			{
				unk_0xC8BEB049F3BFC0AB(&uLocal_57);
				unk_0xE4536F74EAB52EE1(0, Local_50, 0);
				unk_0xB5746603774C4C9D(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xAFDA7B8F83B2CA58(uLocal_57);
				unk_0x73F69DD57B7E92A9(iLocal_54, uLocal_57);
				unk_0x56C7B20E11B37066(&uLocal_57);
			}
			if (!unk_0x74C2FE037DFC8B4A(iLocal_55, 0))
			{
				unk_0xC8BEB049F3BFC0AB(&uLocal_57);
				unk_0xE4536F74EAB52EE1(0, Local_47, 0);
				unk_0xB5746603774C4C9D(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xAFDA7B8F83B2CA58(uLocal_57);
				unk_0x73F69DD57B7E92A9(iLocal_55, uLocal_57);
				unk_0x56C7B20E11B37066(&uLocal_57);
			}
		}
		iLocal_45 = 1;
	}
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_26(6) || func_26(7))
			{
				return 1;
			}
			else
			{
				return func_8(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_24(5))
			{
				if (func_9(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar0 = func_20();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_18()) || Global_103598) || Global_25235) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1) || func_18()) || Global_25235) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_18()) || Global_103598) || Global_25235) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_104551.f_7658.f_919[iVar0] == 5) || Global_36406 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_18()) || Global_103598) || Global_25235) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_12()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_18() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || func_16(8, -1)) || func_12()) || func_11()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_15()) || func_14()) || func_11()) || func_10())
						{
							return 0;
						}
						if ((unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() != 3) && unk_0xCAC20ED19D675C6E() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
						{
							if ((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_18()) || Global_25235) || func_17()) || func_16(8, -1)) || func_14()) || func_13()) || func_12()) || Global_104551.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || func_18()) || func_14()) || Global_103598) || Global_25235) || func_17()) || Global_36991) || func_16(8, -1)) || func_13()) || func_11()) || func_12()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_18()) || Global_103598) || Global_25235) || func_17()) || func_16(8, -1)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_10()
{
	return Global_92868.f_1;
}

int func_11()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_12()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

bool func_14()
{
	return Global_92881.f_316 > 0;
}

bool func_15()
{
	return Global_92881.f_315 > 0;
}

var func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

var func_17()
{
	return Global_1312854;
}

int func_18()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

var func_20()
{
	func_21();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_21()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_23(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_22(unk_0x18F7BE9ACB7D08F4());
			if (func_19(iVar0) && (!func_26(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_19(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

int func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_24(int iParam0)
{
	return func_25(iParam0, Global_35859);
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_26(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_27()
{
	unk_0x810C5D6462DD69E6();
}

