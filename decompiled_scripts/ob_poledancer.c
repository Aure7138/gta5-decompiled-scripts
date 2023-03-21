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
	if (unk_0x23E9113C762466ED(uScriptParam_0))
	{
		unk_0x98F0FA127445E343(uScriptParam_0, 1);
		Local_2 = { unk_0x854ED33E6D715648(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x638527C9799F2AE4(uScriptParam_0);
		unk_0xCEDF2A713644AEDA(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x23E9113C762466ED(uScriptParam_0))
		{
			if (unk_0x16281BACBF5409B8(uScriptParam_0))
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
							unk_0xCEDF2A713644AEDA(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0xCA41A00932714525(uLocal_1))
						{
							unk_0x4E61D536D3C86A36(uLocal_1, -1);
							unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
							unk_0x650BB0E111420EAF(uLocal_1, 1);
							unk_0x921053BAF754303D();
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
	if (!unk_0xA929B2923D14E2F8(uLocal_1, 0))
	{
		if (!unk_0x1DCFA79E268F3EE5(uLocal_1))
		{
			unk_0x478AE709A466CB7E(&uLocal_1);
		}
		else
		{
			unk_0x650BB0E111420EAF(uLocal_1, 1);
		}
	}
	unk_0x921053BAF754303D();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (!unk_0xCA41A00932714525(uLocal_1))
		{
			if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xC017443DBE6DA4D6(uLocal_1, unk_0x17B5CC8A8615737D(), 1))
			{
				return 1;
			}
			if (unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0xCA41A00932714525(uLocal_1))
	{
		if (unk_0x1F8F07D86DA1A701(uLocal_1, -2017877118) == 7)
		{
			unk_0xEB1EFACA68933402(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x2C25C5D1DD2F94CE(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0xEB1EFACA68933402(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x5132972D2BBC5A62(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x87CD14ED799DFD65(uLocal_1, sLocal_8, sLocal_6, unk_0x6B1497B2FDBC8466(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xA929B2923D14E2F8(uLocal_1, 0))
	{
		uLocal_1 = unk_0x2AD5F4170F4ACBEB(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x38FF4F54BBF14419(uLocal_1, 0);
		unk_0x6F65279C9BC14EDB(uLocal_1, 0);
		unk_0xCC61640A821F277C(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0xE1324F59713746FA(iLocal_7);
	unk_0xA0E7D0E8FE126EE8(sLocal_8);
	if (unk_0x9F746898F7881612(iLocal_7) && unk_0xF4F8AE8DD0F08C1E(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0xE1324F59713746FA(iLocal_7);
		unk_0xA0E7D0E8FE126EE8(sLocal_8);
	}
	return 0;
}

