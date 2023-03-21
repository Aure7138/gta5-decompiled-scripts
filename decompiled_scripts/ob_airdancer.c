#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x7D9C4B359376D38A(2))
	{
		func_1();
	}
	if (unk_0x6ADD12BF4D6D2587(uScriptParam_0))
	{
		unk_0xEDC33A771FAEB393(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x6ADD12BF4D6D2587(uScriptParam_0))
		{
			if (unk_0xC8F310BD22DD910A(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xD5BF96615F17406E(uScriptParam_0))
						{
							unk_0x6450931B826B49D9("map_objects");
							if (unk_0x3A801AA34DD821BE("map_objects"))
							{
								unk_0x90CD41CAEBB68E99(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0x96A3D9A8A4C7AFD4();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x74C475EB8E73D398(uParam0, uParam0))
	{
	}
}

