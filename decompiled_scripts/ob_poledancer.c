#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	var uLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	int iLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (unk_0x76B3C79DE564AFC6(uScriptParam_0))
	{
		unk_0x1F18D3C78C8C1A11(uScriptParam_0, 1);
		Local_2 = { unk_0xCD59EF1D7098A4B4(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x69F9721375CE60CF(uScriptParam_0);
		unk_0x33808CAFB62A256D(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x76B3C79DE564AFC6(uScriptParam_0))
		{
			if (unk_0x4673A7E6EA033947(uScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x33808CAFB62A256D(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x8682D8A6269E52C9(uLocal_1))
						{
							unk_0x26CD819CC5B5E17A(uLocal_1, -1);
							unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 1);
							unk_0x390D16BCBFB23E1A(uLocal_1, 1);
							unk_0xBEE2834559A8897A();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0x7A6C051038031EFA(uLocal_1, 0))
	{
		if (!unk_0x4096DB4B0B8A982B(uLocal_1))
		{
			unk_0xA50DE967C5813F23(&uLocal_1);
		}
		else
		{
			unk_0x390D16BCBFB23E1A(uLocal_1, 1);
		}
	}
	unk_0xBEE2834559A8897A();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (!unk_0x8682D8A6269E52C9(uLocal_1))
		{
			if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x7CA73A79B30385F3(uLocal_1, unk_0x0031992CA618A445(), 1))
			{
				return 1;
			}
			if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x8682D8A6269E52C9(uLocal_1))
	{
		if (unk_0xF57D21B49780A7A8(uLocal_1, -2017877118) == 7)
		{
			unk_0xBE0E7D38FE7C495C(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x6E98EDC05E982FE6(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0xBE0E7D38FE7C495C(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x4CB2F72EA418C083(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0xD4A071BB1ABF6C5E(uLocal_1, sLocal_8, sLocal_6, unk_0xDFF7E223DB3CBA25(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x7A6C051038031EFA(uLocal_1, 0))
	{
		uLocal_1 = unk_0x5618B819E5B9C053(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x3E57B1D8EBDD3DD0(uLocal_1, 0);
		unk_0x0EB00C68DDFABE19(uLocal_1, 0);
		unk_0xEB9B39274C401888(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0xBE91026C1FC72180(iLocal_7);
	unk_0x9F62787D280BF2EC(sLocal_8);
	if (unk_0x772F801619C83779(iLocal_7) && unk_0xB3379AC2E71D1E7E(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0xBE91026C1FC72180(iLocal_7);
		unk_0x9F62787D280BF2EC(sLocal_8);
	}
	return 0;
}

