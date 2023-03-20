#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x2EC83C7ACA23E8A4(2))
	{
		func_1();
	}
	if (unk_0xD3FACCDA4D66AEAD(uScriptParam_0))
	{
		unk_0xBB21B5C3111E5F85(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD3FACCDA4D66AEAD(uScriptParam_0))
		{
			if (unk_0x9AB41624168E4453(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xA018C3329F328982(uScriptParam_0))
						{
							unk_0xA9DC3948106CC3E4("map_objects");
							if (unk_0xAD21C77209FD2024("map_objects"))
							{
								unk_0x1C2B9D840AC2664F(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
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
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x78C587487CD40B92();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x28C1B9853548BD8E(uParam0, uParam0))
	{
	}
}

