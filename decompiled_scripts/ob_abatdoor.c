#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_7 = { 0, 0, 0 } ;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (unk_0x96CFB880BAC634CE(2))
	{
		func_4();
	}
	if (unk_0xFC8BFE4B41177C22(uScriptParam_0))
	{
		unk_0x5D7CD709B34C90F0(uScriptParam_0, 1);
		Local_4 = { unk_0xD1A6A821F5AC81DB(uScriptParam_0, 1) };
		Local_7 = { unk_0x88124E0D60FB8D11(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFC8BFE4B41177C22(uScriptParam_0))
		{
			if (unk_0x71C1A46B17126AA4(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xF98CC1C0E657B6CB(uScriptParam_0))
						{
							unk_0xEC9DAA34BBB4658C(joaat("p_abat_roller_1_col"));
							if (unk_0x6252BC0DD8A320DB(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x4E55EAB577C13329(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0xCF39804E8C88080E(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xF98CC1C0E657B6CB(uScriptParam_0))
						{
							if (unk_0x486FF5D06E9659F1(joaat("michael2")) > 0)
							{
								unk_0x80813AC549A1E8AE("map_objects");
								if (unk_0xE100DD4F82A51BDE("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xF98CC1C0E657B6CB(uScriptParam_0))
						{
							if (unk_0x486FF5D06E9659F1(joaat("michael2")) > 0)
							{
								if (Global_97112)
								{
									if (unk_0xE100DD4F82A51BDE("map_objects"))
									{
										unk_0x5ED9595F4AC7D134(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xFC8BFE4B41177C22(uLocal_3))
						{
							Var3 = { unk_0xD1A6A821F5AC81DB(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0xB2BD5837A8D3CEDA(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x0B852B0BF94A8DC1()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_97113 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_2(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_4()
{
	if (unk_0xFC8BFE4B41177C22(uLocal_3))
	{
		unk_0x51C8BEA2005931AB(&uLocal_3);
	}
	unk_0x55098D9E9AD58806(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xBBC29EBE6E1A48FA();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x1B79E937E91F40C3(uParam0, uParam0))
	{
	}
}

