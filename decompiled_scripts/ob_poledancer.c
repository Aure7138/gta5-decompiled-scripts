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
	if (unk_0x95CCECA3948CFE7B(uScriptParam_0))
	{
		unk_0xB7A2078CD1C9A82F(uScriptParam_0, 1);
		Local_2 = { unk_0xCC31DB73C65552D8(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x59DD203239FBDCAD(uScriptParam_0);
		unk_0x8FB4254399424391(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x95CCECA3948CFE7B(uScriptParam_0))
		{
			if (unk_0x265A690A472378A4(uScriptParam_0))
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
							unk_0x8FB4254399424391(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x2DC9BA2299B45EA6(uLocal_1))
						{
							unk_0x9F3B55DA0D0220DD(uLocal_1, -1);
							unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
							unk_0xF1A02DDEC7E15D6E(uLocal_1, 1);
							unk_0xA4E0D8FD51F2A6F7();
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
	if (!unk_0xB6900B8CB0ABBD2B(uLocal_1))
	{
		if (!unk_0xE77F5DDBC2E96204(uLocal_1))
		{
			unk_0x26B3B761603F5232(&uLocal_1);
		}
		else
		{
			unk_0xF1A02DDEC7E15D6E(uLocal_1, 1);
		}
	}
	unk_0xA4E0D8FD51F2A6F7();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (!unk_0x2DC9BA2299B45EA6(uLocal_1))
		{
			if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x87D4C731B013290A(uLocal_1, unk_0xC8B93D94F8954288(), 1))
			{
				return 1;
			}
			if (unk_0xA499226F64D3A26A(unk_0xC8B93D94F8954288(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x2DC9BA2299B45EA6(uLocal_1))
	{
		if (unk_0x090C65D5190A249D(uLocal_1, -2017877118) == 7)
		{
			unk_0x5323F488E6A1B660(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xDA6855CA54D94079(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x5323F488E6A1B660(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0xCD61E9D5CABC7E35(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0xDBC3E5D6F0D413EB(uLocal_1, sLocal_8, sLocal_6, unk_0xC6D38B918E72181E(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xB6900B8CB0ABBD2B(uLocal_1))
	{
		uLocal_1 = unk_0x71DD988C1B903F5D(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x13D89E14CAD4E586(uLocal_1, 0);
		unk_0x58F516BB5E324590(uLocal_1, 0);
		unk_0xAAD662D7E0D59F4C(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x7567CEA8E6B5340B(iLocal_7);
	unk_0xC0E8B67A4385D37D(sLocal_8);
	if (unk_0x0845149A26DABBA5(iLocal_7) && unk_0xF9B86DC1728F1339(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x7567CEA8E6B5340B(iLocal_7);
		unk_0xC0E8B67A4385D37D(sLocal_8);
	}
	return 0;
}

