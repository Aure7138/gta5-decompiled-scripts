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
	iLocal_44 = unk_0xBAC643F143880136(0, 2);
	func_28();
	if (unk_0xD4BE58A7E3E102AC(11))
	{
		func_28();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xBE1BAAD38691E6DD())
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
						if (!unk_0xF4B969E0807E76C7(iLocal_54, 0))
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
				func_28();
			}
		}
		else
		{
			func_28();
		}
	}
}

void func_1()
{
	if (unk_0xC9D9444186B5A374() > 10000)
	{
		if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_47, 10f, 10f, 10f, 0, 1, 0) && !unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			unk_0x5AE11BC36633DE4E(0);
			if (!unk_0xF4B969E0807E76C7(iLocal_54, 0))
			{
				if (iLocal_44 == 0)
				{
					if (iLocal_46 == 0)
					{
					}
					unk_0xA12E1659DEF57244(&uLocal_57);
					unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
					unk_0x5D672CB011E20B28(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x15A7B753872B3CE3(uLocal_57);
					unk_0xC544A8E1032AC1CF(iLocal_54, uLocal_57);
					unk_0x78829A259A6975CD(&uLocal_57);
				}
				else if (!unk_0xF4B969E0807E76C7(uLocal_55, 0))
				{
					unk_0x845704CC8ADF1918(iLocal_54, iLocal_55, 0);
					if (iLocal_46 == 0)
					{
					}
					unk_0xDE8E5CE8855FA963(iLocal_55, 1193033728, 0);
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
	if (!unk_0x2BF5E63466422C38(uParam0))
	{
		if ((((unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), unk_0xC12F91346EA13947(uParam0, Param1), Var1, 0, 1, 0) && unk_0x9BD87928F74C75F1(unk_0x0FA8183DAD2B3203(), unk_0xACE5E491FC1B0D37(uParam0, 1), fParam4)) && func_5(bParam6)) && !unk_0x3DAA08BFD9A801FD(uParam0)) && !unk_0x3DEC1EF42CC05213(uParam0))
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
	if (!unk_0xF4B969E0807E76C7(uParam0, 0))
	{
	}
}

int func_5(bool bParam0)
{
	if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
	{
		if (bParam0)
		{
			if (unk_0xFF107726ED6DC431(unk_0x0FA8183DAD2B3203()) == 1f || unk_0xFF107726ED6DC431(unk_0x0FA8183DAD2B3203()) == 0f)
			{
				return 1;
			}
		}
		else if (unk_0xFF107726ED6DC431(unk_0x0FA8183DAD2B3203()) == 1f)
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
	if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_47, 50f, 50f, 50f, 0, 1, 0))
	{
		unk_0x6BB2B1818CAE531E(joaat("a_m_o_tramp_01"));
		unk_0x6BB2B1818CAE531E(joaat("g_m_y_strpunk_01"));
		unk_0x36B659209EBDD366("amb@drug_dealer");
		while ((!unk_0x6DF9C43E3CC645BC(joaat("a_m_o_tramp_01")) || !unk_0x6DF9C43E3CC645BC(joaat("g_m_y_strpunk_01"))) || !unk_0xB25A0D192C6A0A5B("amb@drug_dealer"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x8CBD7ED64E4A522F("homeless", &uLocal_53);
		Local_50.f_2 = (Local_47.f_2 - 1f);
		iLocal_54 = unk_0xB983F26E7AFB47BF(19, joaat("a_m_o_tramp_01"), Local_47.f_0, Local_47.f_1, Local_50.f_2, 0f, 1, 1);
		unk_0xDB889DCC8B0139E6(iLocal_54, uLocal_53);
		if (iLocal_44 == 1)
		{
			Local_50 = { unk_0xC12F91346EA13947(iLocal_54, 0.8f, 0.8f, -1f) };
			iLocal_55 = unk_0xB983F26E7AFB47BF(5, joaat("g_m_y_strpunk_01"), Local_50, 0f, 1, 1);
			unk_0x8CBD7ED64E4A522F("homeless", &uLocal_53);
			unk_0xDB889DCC8B0139E6(iLocal_55, uLocal_53);
			if (!unk_0xF4B969E0807E76C7(iLocal_54, 0))
			{
				unk_0xA12E1659DEF57244(&uLocal_57);
				unk_0xD65F7D9CC109BCC8(0, Local_50, 0);
				unk_0x5D672CB011E20B28(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x15A7B753872B3CE3(uLocal_57);
				unk_0xC544A8E1032AC1CF(iLocal_54, uLocal_57);
				unk_0x78829A259A6975CD(&uLocal_57);
			}
			if (!unk_0xF4B969E0807E76C7(iLocal_55, 0))
			{
				unk_0xA12E1659DEF57244(&uLocal_57);
				unk_0xD65F7D9CC109BCC8(0, Local_47, 0);
				unk_0x5D672CB011E20B28(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x15A7B753872B3CE3(uLocal_57);
				unk_0xC544A8E1032AC1CF(iLocal_55, uLocal_57);
				unk_0x78829A259A6975CD(&uLocal_57);
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
			if (func_27(6) || func_27(7))
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
			if (func_25(5))
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
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
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
						if (((((((((((((((((!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0xEC9DA7D08BCA2C06(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_18()) || Global_110607) || Global_30738) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1) || func_18()) || Global_30738) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0xEC9DA7D08BCA2C06(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_18()) || Global_110607) || Global_30738) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_18()) || Global_110607) || Global_30738) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_12()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_18() || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || func_16(8, -1)) || func_12()) || func_11()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_15()) || func_14()) || func_11()) || func_10())
						{
							return 0;
						}
						if ((unk_0x16587C6F71675106() && unk_0xD2F18A1388CC0E5C() != 3) && unk_0x9995D24FB0AFE632() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
						{
							if ((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || func_18()) || Global_30738) || func_17()) || func_16(8, -1)) || func_14()) || func_13()) || func_12()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || !unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) || !unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85())) || !unk_0xBF28CCACDDFF5346()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || func_18()) || func_14()) || Global_110607) || Global_30738) || func_17()) || Global_42561) || func_16(8, -1)) || func_13()) || func_11()) || func_12()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || !unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) || !unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85())) || !unk_0xBF28CCACDDFF5346()) || unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0)) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1)) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0xDC58B22FD83FE49F(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || func_18()) || Global_110607) || Global_30738) || func_17()) || func_16(8, -1)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12())
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
	return Global_98708.f_1;
}

int func_11()
{
	if (Global_95621 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

int func_12()
{
	if (unk_0x222F76006659B0EB(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (Global_76837)
	{
		return 1;
	}
	else if (Global_61465 && !Global_61471)
	{
		return 1;
	}
	return 0;
}

bool func_14()
{
	return Global_98721.f_346 > 0;
}

bool func_15()
{
	return Global_98721.f_345 > 0;
}

var func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

var func_17()
{
	return Global_1312873;
}

int func_18()
{
	if (!unk_0x393E9918BC37548A())
	{
		return Global_96177.f_44 == 1;
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
	return Global_111560.f_2358.f_539.f_4321;
}

void func_21()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_23(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_22(unk_0x0FA8183DAD2B3203());
			if (func_19(iVar0) && (!func_27(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_19(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

int func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(uParam0);
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
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_25(int iParam0)
{
	return func_26(iParam0, Global_41396);
}

int func_26(int iParam0, int iParam1)
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

bool func_27(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_28()
{
	unk_0x9C9E32388A7886A2();
}

