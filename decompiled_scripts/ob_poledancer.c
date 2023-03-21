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
	if (unk_0x724D816EA203A79E(uScriptParam_0))
	{
		unk_0x346478B12F69D4E3(uScriptParam_0, 1);
		Local_2 = { unk_0xA4455714F3DCE207(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x349C94FFF43E2979(uScriptParam_0);
		unk_0xD434A01DEA38A939(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x724D816EA203A79E(uScriptParam_0))
		{
			if (unk_0x08B699D523A3F9CB(uScriptParam_0))
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
							unk_0xD434A01DEA38A939(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x36CEFBE9B745A58D(uLocal_1))
						{
							unk_0xEE7131C3C73E7282(uLocal_1, -1);
							unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
							unk_0x22321800954A532E(uLocal_1, 1);
							unk_0x95E4B6F3ED223F5A();
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
	if (!unk_0x1D403DFADBC2DE3C(uLocal_1, 0))
	{
		if (!unk_0xD1DC4B08247A4317(uLocal_1))
		{
			unk_0xF845620A03C7425B(&uLocal_1);
		}
		else
		{
			unk_0x22321800954A532E(uLocal_1, 1);
		}
	}
	unk_0x95E4B6F3ED223F5A();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_1))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xD9C1758D86688CEA(uLocal_1, unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x36CEFBE9B745A58D(uLocal_1))
	{
		if (unk_0xF4FCC3C1048FF2AB(uLocal_1, -2017877118) == 7)
		{
			unk_0xE896C0AD02364F2A(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xDA39550C86FB9A4D(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0xE896C0AD02364F2A(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x96044E39418AAF17(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x68567B14F012CF3E(uLocal_1, sLocal_8, sLocal_6, unk_0x55AEFCD285ECC0F2(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x1D403DFADBC2DE3C(uLocal_1, 0))
	{
		uLocal_1 = unk_0x01B3635C3E8EDD81(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x7D314AB19CA29C96(uLocal_1, 0);
		unk_0xB105531EDD3DE51B(uLocal_1, 0);
		unk_0x2E35C4FA5F0ED22F(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0xF243B7A14FCFD0F4(iLocal_7);
	unk_0x522053D86D6E1C7A(sLocal_8);
	if (unk_0xD6513D668481290A(iLocal_7) && unk_0xF9E082857622D91E(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0xF243B7A14FCFD0F4(iLocal_7);
		unk_0x522053D86D6E1C7A(sLocal_8);
	}
	return 0;
}

