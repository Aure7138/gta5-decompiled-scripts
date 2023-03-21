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
	if (unk_0xFC8BFE4B41177C22(uScriptParam_0))
	{
		unk_0x5D7CD709B34C90F0(uScriptParam_0, 1);
		Local_2 = { unk_0x0D1381B6E0F3987D(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xCFC0C995455A6204(uScriptParam_0);
		unk_0x44C48AC14D3C09ED(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFC8BFE4B41177C22(uScriptParam_0))
		{
			if (unk_0x71C1A46B17126AA4(uScriptParam_0))
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
							unk_0x44C48AC14D3C09ED(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x4FAFF4BCB7633475(uLocal_1))
						{
							unk_0xAFC7A89C990C4339(uLocal_1, -1);
							unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
							unk_0x44FB298D6382876D(uLocal_1, 1);
							unk_0xBBC29EBE6E1A48FA();
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
	if (!unk_0x1C2F771CDC87A3A5(uLocal_1, 0))
	{
		if (!unk_0xCB5CAFF0A4A8B74B(uLocal_1))
		{
			unk_0x734A9F4537A31459(&uLocal_1);
		}
		else
		{
			unk_0x44FB298D6382876D(uLocal_1, 1);
		}
	}
	unk_0xBBC29EBE6E1A48FA();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x4FAFF4BCB7633475(uLocal_1))
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x9B3D4335E0EDB0BE(uLocal_1, unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x4FAFF4BCB7633475(uLocal_1))
	{
		if (unk_0x9B5C1660CCDF7189(uLocal_1, joaat("script_task_play_anim")) == 7)
		{
			unk_0x10425721983AE158(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x67C276550F2DBF33(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x10425721983AE158(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x13CCB1AD131C1082(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x6D75623C644D6F83(uLocal_1, sLocal_8, sLocal_6, unk_0xD2AA6F822D3A55D2(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x1C2F771CDC87A3A5(uLocal_1, 0))
	{
		uLocal_1 = unk_0xB1DBFEB95C0EFB88(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0xC6E8E1D693021E9E(uLocal_1, 0);
		unk_0x3F58BFCF656F0DF1(uLocal_1, 0);
		unk_0xAAA71DD7E9059338(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0xEC9DAA34BBB4658C(iLocal_7);
	unk_0x80813AC549A1E8AE(sLocal_8);
	if (unk_0x6252BC0DD8A320DB(iLocal_7) && unk_0xE100DD4F82A51BDE(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0xEC9DAA34BBB4658C(iLocal_7);
		unk_0x80813AC549A1E8AE(sLocal_8);
	}
	return 0;
}

