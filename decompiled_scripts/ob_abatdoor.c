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
	
	if (unk_0x2170E7BC25114A22(2))
	{
		func_4();
	}
	if (unk_0x7887B64A08364778(uScriptParam_0))
	{
		unk_0xBBAF4B768DDB7572(uScriptParam_0, 1);
		Local_4 = { unk_0xC086F8D75730FA3A(uScriptParam_0, 1) };
		Local_7 = { unk_0xB73B9913DD4EE2AA(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7887B64A08364778(uScriptParam_0))
		{
			if (unk_0x097C50E86C2C5672(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x527E5F55FF95399A(uScriptParam_0))
						{
							unk_0x4ACD1E4CBA159ED1(joaat("p_abat_roller_1_col"));
							if (unk_0x7AD0E9452821C95D(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0xF21B698F4FCCA3D3(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x0033076C5BC6D1E9(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x527E5F55FF95399A(uScriptParam_0))
						{
							if (unk_0xAB964FCFAC3C767A(joaat("michael2")) > 0)
							{
								unk_0x49E996A1E39EAAD7("map_objects");
								if (unk_0xD7669BF035CDA5F6("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x527E5F55FF95399A(uScriptParam_0))
						{
							if (unk_0xAB964FCFAC3C767A(joaat("michael2")) > 0)
							{
								if (Global_88250)
								{
									if (unk_0xD7669BF035CDA5F6("map_objects"))
									{
										unk_0x20F221A8F789EDA5(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x7887B64A08364778(uLocal_3))
						{
							Var3 = { unk_0xC086F8D75730FA3A(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0xBB9A2DB94A862D7A(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x758A470BA92498EA()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_88251 = 1;
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
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x7887B64A08364778(uLocal_3))
	{
		unk_0x77CEDAB7C44BFD4E(&uLocal_3);
	}
	unk_0x8188DB74546FF484(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x01DFCA3621B68C4A();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0xCC257DA11A122B5F(uParam0, uParam0))
	{
	}
}

