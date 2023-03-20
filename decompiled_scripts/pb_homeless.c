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
	iLocal_44 = unk_0x3A5708FEE1B560A9(0, 2);
	func_27();
	if (unk_0x524AF15206846700(11))
	{
		func_27();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7742FB54677E08D9())
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
						if (!unk_0x2006A8C1BA2AFE80(iLocal_54, 0))
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
		if (unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_47, 10f, 10f, 10f, 0, 1, 0) && !unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			unk_0x5AE11BC36633DE4E(0);
			if (!unk_0x2006A8C1BA2AFE80(iLocal_54, 0))
			{
				if (iLocal_44 == 0)
				{
					if (iLocal_46 == 0)
					{
					}
					unk_0x33A0CEA494F4C2A3(&uLocal_57);
					unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), 0);
					unk_0x878D12AEFBF5BAF0(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x33F83FC0F5F458E3(uLocal_57);
					unk_0x8B8674266D533E9F(iLocal_54, uLocal_57);
					unk_0x433C209504FBC7EE(&uLocal_57);
				}
				else if (!unk_0x2006A8C1BA2AFE80(uLocal_55, 0))
				{
					unk_0xF14C2AE8A3F59CE0(iLocal_54, iLocal_55, 0);
					if (iLocal_46 == 0)
					{
					}
					unk_0x89E04CE50E22A89C(iLocal_55, 1193033728, 0);
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
	if (!unk_0xE4F7206742848BAF(uParam0))
	{
		if ((((unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), unk_0xD7C4E2CB0B216852(uParam0, Param1), Var1, 0, 1, 0) && unk_0x586C5B4EFB499437(unk_0x27D769C59BC9D030(), unk_0xA8CFDE65C45F813B(uParam0, 1), fParam4)) && func_5(bParam6)) && !unk_0xBD036012AF60D938(uParam0)) && !unk_0x8D1E4231095B313B(uParam0))
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
	if (!unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
	}
}

int func_5(bool bParam0)
{
	if (unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
	{
		if (bParam0)
		{
			if (unk_0x20F71E6370022C2C(unk_0x27D769C59BC9D030()) == 1f || unk_0x20F71E6370022C2C(unk_0x27D769C59BC9D030()) == 0f)
			{
				return 1;
			}
		}
		else if (unk_0x20F71E6370022C2C(unk_0x27D769C59BC9D030()) == 1f)
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
	if (unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_47, 50f, 50f, 50f, 0, 1, 0))
	{
		unk_0x97C59C4E8349D15F(joaat("a_m_o_tramp_01"));
		unk_0x97C59C4E8349D15F(joaat("g_m_y_strpunk_01"));
		unk_0x88172B3983EC5071("amb@drug_dealer");
		while ((!unk_0x875098323FCA8FE6(joaat("a_m_o_tramp_01")) || !unk_0x875098323FCA8FE6(joaat("g_m_y_strpunk_01"))) || !unk_0x482101C9B3483958("amb@drug_dealer"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x5974EAB5457E93B2("homeless", &uLocal_53);
		Local_50.f_2 = (Local_47.f_2 - 1f);
		iLocal_54 = unk_0x91D233CD0204A37F(19, joaat("a_m_o_tramp_01"), Local_47.f_0, Local_47.f_1, Local_50.f_2, 0f, 1, 1);
		unk_0x71065DDFF8D7744C(iLocal_54, uLocal_53);
		if (iLocal_44 == 1)
		{
			Local_50 = { unk_0xD7C4E2CB0B216852(iLocal_54, 0.8f, 0.8f, -1f) };
			iLocal_55 = unk_0x91D233CD0204A37F(5, joaat("g_m_y_strpunk_01"), Local_50, 0f, 1, 1);
			unk_0x5974EAB5457E93B2("homeless", &uLocal_53);
			unk_0x71065DDFF8D7744C(iLocal_55, uLocal_53);
			if (!unk_0x2006A8C1BA2AFE80(iLocal_54, 0))
			{
				unk_0x33A0CEA494F4C2A3(&uLocal_57);
				unk_0x7ACF885D02B287A3(0, Local_50, 0);
				unk_0x878D12AEFBF5BAF0(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x33F83FC0F5F458E3(uLocal_57);
				unk_0x8B8674266D533E9F(iLocal_54, uLocal_57);
				unk_0x433C209504FBC7EE(&uLocal_57);
			}
			if (!unk_0x2006A8C1BA2AFE80(iLocal_55, 0))
			{
				unk_0x33A0CEA494F4C2A3(&uLocal_57);
				unk_0x7ACF885D02B287A3(0, Local_47, 0);
				unk_0x878D12AEFBF5BAF0(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x33F83FC0F5F458E3(uLocal_57);
				unk_0x8B8674266D533E9F(iLocal_55, uLocal_57);
				unk_0x433C209504FBC7EE(&uLocal_57);
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
	
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
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
						if (((((((((((((((((!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_18()) || Global_100201) || Global_25122) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1) || func_18()) || Global_25122) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_18()) || Global_100201) || Global_25122) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_18()) || Global_100201) || Global_25122) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_18() || unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0) || func_16(8, -1)) || func_12()) || func_11()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_15()) || func_14()) || func_11()) || func_10())
						{
							return 0;
						}
						if ((unk_0x5D293E404CA20AA5() && unk_0x472A7A9D6102404C() != 3) && unk_0x00798D768A589710() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
						{
							if ((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || func_18()) || Global_25122) || func_17()) || func_16(8, -1)) || func_14()) || func_13()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || !unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) || !unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511())) || !unk_0xCBB243DDC0D132D1()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || func_18()) || func_14()) || Global_100201) || Global_25122) || func_17()) || Global_36839) || func_16(8, -1)) || func_13()) || func_11()) || func_12()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || !unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) || !unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511())) || !unk_0xCBB243DDC0D132D1()) || unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0)) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1)) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0x27B3DE54D214014B(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || func_18()) || Global_100201) || Global_25122) || func_17()) || func_16(8, -1)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12())
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
	return Global_91317.f_1;
}

int func_11()
{
	if (Global_88533 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return 0;
}

int func_12()
{
	if (unk_0xD32535FA4397160F(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (Global_69749)
	{
		return 1;
	}
	else if (Global_55743 && !Global_55749)
	{
		return 1;
	}
	return 0;
}

bool func_14()
{
	return Global_91330.f_297 > 0;
}

bool func_15()
{
	return Global_91330.f_296 > 0;
}

var func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

var func_17()
{
	return Global_1315913;
}

int func_18()
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return Global_89089.f_44 == 1;
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
	return Global_101154.f_1826.f_539.f_3549;
}

void func_21()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_23(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_22(unk_0x27D769C59BC9D030());
			if (func_19(iVar0) && (!func_26(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_19(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(uParam0);
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
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_24(int iParam0)
{
	return func_25(iParam0, Global_35711);
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
	return Global_35711 == iParam0;
}

void func_27()
{
	unk_0x7C3AA2D27E16E2AD();
}

