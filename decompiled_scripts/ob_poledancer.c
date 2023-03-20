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
	if (unk_0xD2CFFE76B625AE55(uScriptParam_0))
	{
		unk_0xA8CA82EB31D1626F(uScriptParam_0, 1);
		Local_2 = { unk_0xD7C4E2CB0B216852(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x4D6B971C8AEE130C(uScriptParam_0);
		unk_0xF1919C21714E9FAF(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD2CFFE76B625AE55(uScriptParam_0))
		{
			if (unk_0x179C5C4A19D3D535(uScriptParam_0))
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
							unk_0xF1919C21714E9FAF(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0xE4F7206742848BAF(uLocal_1))
						{
							unk_0x4F84B4D98F3DA350(uLocal_1, -1);
							unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 1);
							unk_0x94DC76C688E7D222(uLocal_1, 1);
							unk_0x7C3AA2D27E16E2AD();
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
	if (!unk_0x2006A8C1BA2AFE80(uLocal_1, 0))
	{
		if (!unk_0x4FB9EE3D0706477D(uLocal_1))
		{
			unk_0xF6ADC11BDB5ECA41(&uLocal_1);
		}
		else
		{
			unk_0x94DC76C688E7D222(uLocal_1, 1);
		}
	}
	unk_0x7C3AA2D27E16E2AD();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (!unk_0xE4F7206742848BAF(uLocal_1))
		{
			if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x77F1B7F6C32990D6(uLocal_1, unk_0x27D769C59BC9D030(), 1))
			{
				return 1;
			}
			if (unk_0x799B2D82E6E6C363(unk_0x27D769C59BC9D030(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x7C2070521268C99E(unk_0x27D769C59BC9D030()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0xE4F7206742848BAF(uLocal_1))
	{
		if (unk_0x810AFFABCBF31E2D(uLocal_1, -2017877118) == 7)
		{
			unk_0x878D12AEFBF5BAF0(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xEBE7103A50B01336(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x878D12AEFBF5BAF0(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0xF4954568C87BA772(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0xF4906444051FDC58(uLocal_1, sLocal_8, sLocal_6, unk_0x5C02660403071A83(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x2006A8C1BA2AFE80(uLocal_1, 0))
	{
		uLocal_1 = unk_0x91D233CD0204A37F(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x49A20F75B1327C29(uLocal_1, 0);
		unk_0xFFD8329ED7A8E20C(uLocal_1, 0);
		unk_0xA8ED9F72DC442242(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x97C59C4E8349D15F(iLocal_7);
	unk_0x88172B3983EC5071(sLocal_8);
	if (unk_0x875098323FCA8FE6(iLocal_7) && unk_0x482101C9B3483958(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x97C59C4E8349D15F(iLocal_7);
		unk_0x88172B3983EC5071(sLocal_8);
	}
	return 0;
}

