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
	if (unk_0xD42BD6EB2E0F1677(uScriptParam_0))
	{
		unk_0x7D9EFB7AD6B19754(uScriptParam_0, 1);
		Local_2 = { unk_0xC899C78DB72CCBCC(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xC230DD956E2F5507(uScriptParam_0);
		unk_0xF66F820909453B8C(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD42BD6EB2E0F1677(uScriptParam_0))
		{
			if (unk_0xF15D7EC08DFE28DB(uScriptParam_0))
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
							unk_0xF66F820909453B8C(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x6CFF81397164A1D3(uLocal_1))
						{
							unk_0x6EE9AE1124E7C613(uLocal_1, -1);
							unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 1);
							unk_0x2AD4789CBFD829EC(uLocal_1, 1);
							unk_0x5E8B6D17FF91CD59();
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
	if (!unk_0x7D5B1F88E7504BBA(uLocal_1))
	{
		if (!unk_0x613C15D5D8DB781F(uLocal_1))
		{
			unk_0xCC0EF140F99365C5(&uLocal_1);
		}
		else
		{
			unk_0x2AD4789CBFD829EC(uLocal_1, 1);
		}
	}
	unk_0x5E8B6D17FF91CD59();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (!unk_0x6CFF81397164A1D3(uLocal_1))
		{
			if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x7B6E7BEC1143AC86(uLocal_1, unk_0x096275889B8E0EE0(), 1))
			{
				return 1;
			}
			if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x6CFF81397164A1D3(uLocal_1))
	{
		if (unk_0x04932A97CB319DE0(uLocal_1, -2017877118) == 7)
		{
			unk_0x8DBC05C86F873CC9(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xAEB40615337EF1E3(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x8DBC05C86F873CC9(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0xDEE49D5CA6C49148(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0xDF8BA1D7540E9312(uLocal_1, sLocal_8, sLocal_6, unk_0xE29F927A961F8AAA(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x7D5B1F88E7504BBA(uLocal_1))
	{
		uLocal_1 = unk_0x9066DFD4D92E6773(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x5222F3E172937744(uLocal_1, 0);
		unk_0x5E95290AF8605EA1(uLocal_1, 0);
		unk_0x49876BF356F39E66(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0xFA28FE3A6246FC30(iLocal_7);
	unk_0xA862A2AD321F94B4(sLocal_8);
	if (unk_0x1283B8B89DD5D1B6(iLocal_7) && unk_0x27FF6FE8009B40CA(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0xFA28FE3A6246FC30(iLocal_7);
		unk_0xA862A2AD321F94B4(sLocal_8);
	}
	return 0;
}

