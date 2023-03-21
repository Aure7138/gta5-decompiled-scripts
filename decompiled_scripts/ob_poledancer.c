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
	if (unk_0xD4B321D9096B01FC(uScriptParam_0))
	{
		unk_0x860A5CC30A0EF207(uScriptParam_0, 1);
		Local_2 = { unk_0xC12F91346EA13947(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xD2809C7F7FD79247(uScriptParam_0);
		unk_0x8C85E8C71AD74415(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD4B321D9096B01FC(uScriptParam_0))
		{
			if (unk_0xA887AF38A5D654D0(uScriptParam_0))
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
							unk_0x8C85E8C71AD74415(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x2BF5E63466422C38(uLocal_1))
						{
							unk_0x5D865B9E32556997(uLocal_1, -1);
							unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 1);
							unk_0x7D81B41B134BD6F2(uLocal_1, 1);
							unk_0x9C9E32388A7886A2();
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
	if (!unk_0xF4B969E0807E76C7(uLocal_1, 0))
	{
		if (!unk_0x62E95D2FED28E41C(uLocal_1))
		{
			unk_0x4F058F27442031CC(&uLocal_1);
		}
		else
		{
			unk_0x7D81B41B134BD6F2(uLocal_1, 1);
		}
	}
	unk_0x9C9E32388A7886A2();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (!unk_0x2BF5E63466422C38(uLocal_1))
		{
			if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x3656B691E303FDE0(uLocal_1, unk_0x0FA8183DAD2B3203(), 1))
			{
				return 1;
			}
			if (unk_0x7A10CED38342D31F(unk_0x0FA8183DAD2B3203(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x2BF5E63466422C38(uLocal_1))
	{
		if (unk_0x411C065ADB822CD9(uLocal_1, -2017877118) == 7)
		{
			unk_0x5D672CB011E20B28(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xF1B5D244F5E03069(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x5D672CB011E20B28(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0xF6FD8019402CF03B(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x5473CBEA4A5E45DF(uLocal_1, sLocal_8, sLocal_6, unk_0x64A3FFD9D62755C5(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xF4B969E0807E76C7(uLocal_1, 0))
	{
		uLocal_1 = unk_0xB983F26E7AFB47BF(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0xCDB7DE4079A7DF65(uLocal_1, 0);
		unk_0x6E712A176E3EEFA8(uLocal_1, 0);
		unk_0xCC94EE23853F38E4(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x6BB2B1818CAE531E(iLocal_7);
	unk_0x36B659209EBDD366(sLocal_8);
	if (unk_0x6DF9C43E3CC645BC(iLocal_7) && unk_0xB25A0D192C6A0A5B(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x6BB2B1818CAE531E(iLocal_7);
		unk_0x36B659209EBDD366(sLocal_8);
	}
	return 0;
}

